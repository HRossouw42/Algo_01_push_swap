/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:07:51 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 17:08:28 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			minval(t_stack *lst)
{
	int		low;
	t_stack	*tmp;

	tmp = lst;
	low = 2147483647;
	while (tmp != NULL)
	{
		if (tmp->pos < low)
			low = tmp->pos;
		tmp = tmp->next;
	}
	return (low);
}

void		movesmalltob(t_hold *node, char *cmd)
{
	int		count;
	int		min;
	int		minloc;
	t_stack *a;

	count = node->size - 3;
	while (count > 0)
	{
		a = node->a;
		min = minval(node->a);
		minloc = maxposition(node->a, min, 1);
		if (a->pos == min)
		{
			pb(node, cmd, 1);
			count--;
		}
		else if (minloc >= node->size / 2)
			rra(node, cmd, 1);
		else if (minloc < node->size / 2)
			ra(node, cmd, 1);
		if (node->supcolour == 1 || node->vis == 1)
			printout(node, cmd);
		print_debug(node);
	}
}

void		dumbsortbigger(t_hold *node, char *cmd)
{
	t_stack *b;

	movesmalltob(node, cmd);
	small_sort(node, cmd);
	b = node->b;
	while (b != NULL)
	{
		pa(node, cmd, 1);
		if (node->supcolour == 1 || node->vis == 1)
			printout(node, cmd);
		print_debug(node);
		if (is_stack_sorted(node) == 1 && list_size(node->b) == 0)
			break ;
	}
}

void		small_sort(t_hold *node, char *cmd)
{
	t_stack *a;

	if (is_stack_sorted(node) == 1 && list_size(node->b) == 0)
		return ;
	if (list_size(node->a) <= 3)
	{
		while (1)
		{
			a = node->a;
			if (is_list_sorted(a, 'a') == 1)
				break ;
			if (a->data < a->next->data)
				rra(node, cmd, 1);
			if (a->data > a->next->data)
				sa(node, cmd, 1);
			if (node->supcolour == 1)
				printout(node, cmd);
			print_debug(node);
		}
	}
	else
		dumbsortbigger(node, cmd);
	printout(node, cmd);
}
