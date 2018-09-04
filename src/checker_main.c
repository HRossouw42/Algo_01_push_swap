/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:27:00 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/04 15:57:59 by hrossouw         ###   ########.fr       */
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
	print_stacks(la, lb); //remove later
	get_input(la, lb);
	if (is_sorted(la, lb))
		ok();
	else
		ko();
	return (0);
}