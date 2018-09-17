/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:11:22 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 13:35:34 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list		*get_args(int len, char **argv)
{
	t_list	*ret;
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
	return (ret);
}
