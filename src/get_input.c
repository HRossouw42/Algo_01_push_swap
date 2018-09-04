/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:31:15 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/04 15:57:30 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ok(void)
{
	ft_putstr("OK\n");
	exit(1);
}

void	error(void)
{
	ft_putstr("Error\n");
	exit(1);
}

void	ko(void)
{
	ft_putstr("KO\n");
	exit(1);
}

void	read_input(const char *str, t_list *la, t_list *lb)
{
	if (ft_strcmp(str, "sa") == 0)
		op_sa(la);
	else if (ft_strcmp(str, "sb") == 0)
		op_sb(lb);
	else if (ft_strcmp(str, "ss") == 0)
		op_ss(la, lb);
	else if (ft_strcmp(str, "pa") == 0)
		op_pa(la, lb);
	else if (ft_strcmp(str, "pb") == 0)
		op_pb(la, lb);
	else if (ft_strcmp(str, "ra") == 0)
		op_ra(la);
	else if (ft_strcmp(str, "rb") == 0)
		op_rb(lb);
	else if (ft_strcmp(str, "rr") == 0)
		op_rr(la, lb);
	else if (ft_strcmp(str, "rra") == 0)
		op_rra(la);
	else if (ft_strcmp(str, "rrb") == 0)
		op_rrb(lb);
	else if (ft_strcmp(str, "rrr") == 0)
		op_rrr(la, lb);
	else if (ft_strcmp(str, "print") == 0)
		print_stacks(la, lb);
	else
		error();
}

void	get_input(t_list *la, t_list *lb)
{
	char *str;
	while (ft_get_next_line(0, &str))
		read_input(str, la, lb);
}