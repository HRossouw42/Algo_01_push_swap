/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:04:43 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/18 15:28:05 by hrossouw         ###   ########.fr       */
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
		if (is_sorted(la, lb))
		{
			free_lst(la);
			free_lst(lb);
			return (0);
		}
		else
			algo_start(la, lb);
	}
	else
		return (0);
}
