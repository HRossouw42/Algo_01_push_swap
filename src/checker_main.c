/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:07:38 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 13:09:42 by hrossouw         ###   ########.fr       */
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
		error_checker(argc, argv, la);
		lb = ft_lst_new();
		get_input(la, lb);
		if (is_sorted(la, lb))
			ok();
		else
			ko();
	}
	return (0);
}
