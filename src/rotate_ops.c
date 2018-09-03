/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 12:12:50 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/03 15:32:29 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_list *lst)
{
	ft_list_append(lst, lst->head->data);
	ft_list_del(lst, lst->head);
}

void	op_ra(t_list *lst)
{
	rotate(lst);
}

void	op_rb(t_list *lst)
{
	rotate(lst);
}

void	op_rr(t_list *la, t_list *lb)
{
	rotate(la);
	rotate(lb);
}
