/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:08:49 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 16:59:35 by hrossouw         ###   ########.fr       */
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

void		algos_smallest_first(int len, t_list *la)
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

int			is_minimum(t_list *lst)
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
