/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_rotate_ops.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:48:56 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/05 14:59:35 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pr_ra(t_list *lst)
{
	op_ra(lst);
	ft_putstr("ra\n");
}

void	pr_rb(t_list *lst)
{
	op_rb(lst);
	ft_putstr("ra\n");
}

void	pr_rrr(t_list *la, t_list *lb)
{
	op_rrr(la, lb);
	ft_putstr("rrr\n");
}
