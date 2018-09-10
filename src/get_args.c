/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:55:25 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/10 15:08:34 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list		*get_args(int len, char **argv)
{
	t_list	*ret;
	t_list	*temp;
	char	**split;
	int		i;
	int		j;

	i = 0;
	ret = ft_lst_new();

	while (++i < len)
	{
		j = -1;
		split = ft_strsplit(argv[i], ' ');
		while (split[++j] != NULL)
			ret = ft_lst_append(ret, ft_atoi(split[j]));
		ft_strdel(split);
	}
	lst_print(ret); //to test with
	ft_putchar('\n'); //to test
	return (ret);
}
