/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:25:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/04 12:01:09 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* 
** TODO: add to stack total && print out without printf
** MAYBE: visualiser
*/ 

int		is_list(t_list *lst)
{
	if (lst != NULL && lst->head != NULL && lst->head->next != NULL)
		return (1);
	return (0);
}

void	swap(t_list *lst)
{
	t_node	*node;

	node = lst->head;
	lst->head = node->next;
	lst->head->prev = NULL;
	node->prev = lst->head;
	node->next = lst->head->next;
	lst->head->next = node;
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
