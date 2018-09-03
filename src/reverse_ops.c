/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 12:36:02 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/03 15:33:55 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate(t_list *lst)
{
	ft_list_prepend(lst, lst->tail->data);
	ft_list_del(lst, lst->tail);
}

void	op_rra(t_list *lst)
{
	if (lst != NULL && lst->head != NULL && lst->head->next != NULL)
		reverse_rotate(lst);
}

void	op_rrb(t_list *lst)
{
	if (lst != NULL && lst->head != NULL && lst->head->next != NULL)
		reverse_rotate(lst);
}

void	op_rrr(t_list *l_a, t_list *l_b)
{
	if (l_a != NULL && l_a->head != NULL && l_a->head->next != NULL)
		reverse_rotate(l_a);
	if (l_b != NULL && l_b->head != NULL && l_b->head->next != NULL)
		reverse_rotate(l_b);
}
