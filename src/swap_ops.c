/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:25:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 17:07:08 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_list *lst)
{
	t_node	*node;
	t_node	*c_node;

	node = lst->head;
	lst->head = node->next;
	lst->head->prev = NULL;
	node->prev = lst->head;
	node->next = lst->head->next;
	lst->head->next = node;
	c_node = lst->head;
	while (c_node->next != NULL)
	{
		c_node = c_node->next;
		if (c_node->next == NULL)
			lst->tail = c_node;
	}
}

void	op_sa(t_list *lst)
{
	if (is_list(lst))
	{
		swap(lst);
	}
}

void	op_sb(t_list *lst)
{
	if (is_list(lst))
	{
		swap(lst);
	}
}

void	op_ss(t_list *la, t_list *lb)
{
	if (la != NULL && la->head != NULL && la->head->next != NULL)
		op_sa(la);
	if (lb != NULL && lb->head != NULL && lb->head->next != NULL)
		op_sb(lb);
}
