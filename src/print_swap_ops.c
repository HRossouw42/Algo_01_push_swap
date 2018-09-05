/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_swap_ops.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:36:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/05 14:47:10 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pr_sa(t_list *lst)
{
	op_sa(lst);
	ft_putstr("sa\n");
}

void	pr_sb(t_list *lst)
{
	op_sb(lst);
	ft_putstr("sb\n");
}

void	pr_ss(t_list *la, t_list *lb)
{
	op_ss(la, lb);
	ft_putstr("ss\n");
}
