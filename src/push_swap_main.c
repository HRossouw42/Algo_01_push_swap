/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:04:43 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/11 15:58:01 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_list	*la;
	t_list	*lb;

	if (argc > 1)
	{
		la = get_args(argc, argv);
		lst_print(la); //to test with
		ft_putchar_fd('\n', 2); //to test
		get_first(la);
		get_second(la);
		get_last(la);
		// error_checker(argc, argv, la);
		// lb = ft_lst_new();
		// if (is_sorted(la, lb))
		// 	exit (1);
		// else
		// 	algo_start(la, lb);
		// lst_print(la); //to test with
		// ft_putchar_fd('\n', 2); //to test
	}
	else
		exit (1);
}
