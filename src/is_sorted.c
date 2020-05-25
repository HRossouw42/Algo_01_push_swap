/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:12:29 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 13:12:30 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// check if one list is sorted
int		is_list_sorted(t_stack *list, char ab)
{
	t_stack	*tmp;

	if (ab == 'a')
	{
		tmp = list;
		while (tmp->next != NULL)
		{
			if (tmp->data > tmp->next->data)
				return (0);
			tmp = tmp->next;
		}
	}
	if (ab == 'b')
	{
		tmp = list;
		while (tmp->next != NULL)
		{
			if (tmp->data < tmp->next->data)
				return (0);
			tmp = tmp->next;
		}
	}
	return (1);
}

// check if both lists are sorted
int		is_stack_sorted(t_hold *node)
{
	t_stack	*tmpa;
	int		bsize;
	int		asize;

	asize = list_size(node->a);
	bsize = list_size(node->b);
	tmpa = node->a;
	if (asize > 0)
	{
		while (tmpa->next != NULL)
		{
			if (tmpa->data > tmpa->next->data)
				return (0);
			tmpa = tmpa->next;
		}
	}
	if (bsize == 0)
		return (1);
	return (0);
}

// is list in reverse
int		is_rev_list(t_list *la)
{
	t_node	*current;

	current = la->head;
	while (current->data > current->next->data)
	{
		current = current->next;
		if (current == la->tail)
			return (1);
	}
	return (0);
}
