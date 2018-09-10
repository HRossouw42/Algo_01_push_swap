/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:04:43 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/10 17:07:59 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_list	*la;
	t_list	*lb;
	t_list	*largs;

	la = get_args(argc, argv);
	lst_print(la); //to test with
	ft_putchar_fd('\n', 2); //to test
	error_checker(argc, argv, la);
	lb = ft_lst_new();
	if (is_sorted(la, lb))
		return (0);
	else
		algo_start(argc, la, lb);
	lst_print(la); //to test with
	ft_putchar_fd('\n', 2); //to test
}
