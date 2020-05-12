/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_rotate_ops.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:48:56 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 13:12:54 by hrossouw         ###   ########.fr       */
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
	ft_putstr("rb\n");
}

void	pr_rr(t_list *la, t_list *lb)
{
	op_rrr(la, lb);
	ft_putstr("rr\n");
}
