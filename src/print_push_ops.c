/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_push_ops.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:42:51 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/12 14:39:09 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pr_pa(t_list *la, t_list *lb)
{
	op_pa(la, lb);
	ft_putstr("pa\n");	
}

void	pr_pb(t_list *la, t_list *lb)
{
	op_pb(la, lb);
	ft_putstr("pb\n");
}

void	pr_rra(t_list *lst)
{
	op_rra(lst);
	ft_putstr("rra\n");
}

void	pr_rrb(t_list *lst)
{
	op_rb(lst);
	ft_putstr("rrb\n");
}

void	pr_rrr(t_list *la, t_list *lb)
{
	op_rrr(la, lb);
	ft_putstr("rrr\n");
}