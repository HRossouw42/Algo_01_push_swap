/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:04:43 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/07 12:07:11 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_list	*la;
	t_list	*lb;
	char	**input;

	error_checker(argc, argv);
	input = ft_strsplit(*argv, ' ');
	//printf("%s", *input);
	la = ft_lst_new();
	lb = ft_lst_new();
	argv++;
	input++;
	while (*argv)
	{
		la = ft_lst_append(la, ft_atoi(*input));
		argv++;
	}
	if (is_sorted(la, lb))
		return (0);
	else
		algo_start(argc, la, lb);
}
