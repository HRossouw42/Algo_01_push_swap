/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:08:49 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 16:25:19 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			find_list_length(t_list *list)
{
	t_node	*node;
	int		list_len;

	node = list->head;
	list_len = 0;
	while (node != NULL)
	{
		list_len++;
		node = node->next;
	}
	return (list_len);
}

int			half_list(int len)
{
	int		div;

	if ((len % 2 == 0) && len != 0)
		div = len / 2;
	else
	{
		len = len + 1;
		div = len / 2;
	}
	return (div);
}

// void		algos_smallest_first(int len, t_list *la)
// {
// 	t_node	*node;
// 	int		smallest;
// 	int		half;
// 	int		smallest_pos;

// 	smallest = la->head->data;
// 	node = la->head;
// 	half = half_list(len);
// 	smallest_pos = 1;
// 	while (node != NULL)
// 	{
// 		if (node->data < smallest)
// 		{
// 			smallest = node->data;
// 			smallest_pos++;
// 		}
// 		node = node->next;
// 	}
// 	while (la->head->data != smallest)
// 	{
// 		if (la->head->data != smallest && la->tail->data == smallest)
// 			pr_rra(la);
// 		else if (la->head->data != smallest && la->head->next->data == smallest)
// 			pr_sa(la);
// 		else if (la->head->data != smallest && la->tail->prev->data == smallest)
// 		{
// 			pr_rra(la);
// 			pr_rra(la);
// 		}
// 		else if (smallest_pos > half)
// 			pr_rra(la);
// 		else if (smallest_pos <= half)
// 			pr_ra(la);
// 	}
// }

void	algos_smallest_first(int len, t_list *la)
{
	int		smallest;
	int		smallest_pos;

	smallest = is_minimum(la);
	smallest_pos = is_smallest_pos(la);
	move_up_a(smallest, len, smallest_pos, la);
}

void		is_max(t_list *lst)
{
	t_node	*max;

	max = lst->head;
	while (max->next != NULL)
	{
		if (max->data < max->next->data)
			max = max->next;
	}
}

int	is_minimum(t_list *lst)
{
	t_node	*node;
	int		min;

	node = lst->head;
	min = lst->head->data;
	while (node != NULL)
	{
		if (node->data < min)
			min = node->data;
		node = node->next;
	}
	return (min);
}

int	is_smallest_pos(t_list *lst)
{
	t_node	*node;
	int		smallest;
	int		smallest_pos;

	smallest = is_minimum(lst);
	node = lst->head;
	smallest_pos = 0;
	while (node->data != smallest)
	{
		node = node->next;
		smallest_pos++;
	}
	return (smallest_pos);
}
