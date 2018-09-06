/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:44:59 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/06 17:43:23 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		is_sorted_list(t_list *lst)
{
	t_node	*node;

	node = lst->head;
	if (lst->head->data == lst->tail->data)
		return (1);
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	return (1);
}

int		is_sorted(t_list *la, t_list *lb)
{
	t_node	*node;

	node = la->head;
	if (la->head->data == la->tail->data)
		if (lb->head == NULL)
			return (1);
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	if (lb->head != NULL)
		return (0);
	else
		return (1);
}

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
