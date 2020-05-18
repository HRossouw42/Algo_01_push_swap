/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:09:55 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 13:11:10 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int				has_duplicates(t_list *lst)
{
	int			curr;
	t_node		*node;
	t_node		*tmp;

	if (!lst)
		return (0);
	node = lst->head;
	tmp = lst->head;
	curr = node->data;
	while (tmp)
	{
		node = tmp;
		curr = tmp->data;
		while (node->next)
		{
			if (curr == node->next->data)
				return (1);
			node = node->next;
		}
		tmp = tmp->next;
	}
	return (0);
}

int				is_not_digit(char *str)
{
	int i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] != '-' && str[i] != '+' && \
				(!(ft_isdigit(str[i]))) && (!(ft_isspace(str[i]))))
			return (1);
		i++;
	}
	return (0);
}

static int		arg_is_int(char arg)
{
	long		result;
	result = ft_atol(arg);
	if (result > 2147483647 || result < -2147483648)
		return (0);
	else 
		return (1);
}

void			error_checker(int argc, char **argv, t_list *lst)
{
	if (argc <= 1)
		exit(1);
	if (has_duplicates(lst))
		error();
	argv++;
	while (*argv)
	{
		if (ft_atol(*argv) > 2147483647 || ft_atol(*argv) < -2147483647)
			error();
		if ((is_not_digit(*argv)) == 1)
			error();
		argv++;
	}
}
