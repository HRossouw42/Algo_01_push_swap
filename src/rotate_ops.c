/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 12:12:50 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/13 16:02:23 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_list *lst)
{
	ft_lst_append(lst, lst->head->data);
	ft_lst_del(lst, lst->head);
}

void	op_ra(t_list *lst)
{
	if (lst != NULL && lst->head != NULL && lst->head->next != NULL)
		rotate(lst);
}

void	op_rb(t_list *lst)
{
	if (lst != NULL && lst->head != NULL && lst->head->next != NULL)
		rotate(lst);
}

void	op_rr(t_list *la, t_list *lb)
{
	if (la != NULL && la->head != NULL && la->head->next != NULL)
		rotate(la);
	if (lb != NULL && lb->head != NULL && lb->head->next != NULL)
		rotate(lb);
}
