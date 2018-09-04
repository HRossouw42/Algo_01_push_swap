/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:02:13 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/04 12:03:30 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_list	*la;
	t_list	*lb;

	la = ft_lst_new();
	lb = ft_lst_new();
	argv++;
	while (*argv)
	{
		la = ft_lst_append(la, ft_atoi(*argv));
		argv++;
	}
	op_sa(la);
	print_stacks(la, lb);
	return (0);
}