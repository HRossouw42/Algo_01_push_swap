/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:05:01 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 17:05:24 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
