/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:25:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/13 16:03:50 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		is_list(t_list *lst)
{
	if (lst != NULL && lst->head != NULL && lst->head->next != NULL)
		return (1);
	return (0);
}

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

void	op_pa(t_list *la, t_list *lb)
{
	if (!(lb == NULL || lb->head == NULL))
	{
		ft_lst_prefix(la, lb->head->data);
		ft_lst_del(lb, lb->head);
	}
}

void	op_pb(t_list *la, t_list *lb)
{
	if (!(la == NULL || la->head == NULL))
	{
		ft_lst_prefix(lb, la->head->data);
		ft_lst_del(la, la->head);
	}
}
