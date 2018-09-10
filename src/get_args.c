/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:55:25 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/10 14:56:13 by hrossouw         ###   ########.fr       */
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
	int k = -1;

	i = 0;
	ret = ft_lst_new();

	while (++i < len)
	{
		//printf("i = %d\n", i);
		j = -1;
		split = ft_strsplit(argv[i], ' ');
		while (split[++k])
			printf("Split[k] [%d]%s \n", k, split[k]);
		while (split[++j] != NULL)
		{
			printf("Split[j] [%d]%s \n", j, split[j]);
			ret = ft_lst_append(ret, ft_atoi(split[j]));
		}
		ft_strdel(split);
	}
	lst_print(ret); //to test with
	ft_putchar('\n'); //to test
	return (ret);
}
