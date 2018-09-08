/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:44:25 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/07 11:55:42 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			has_duplicates(t_list *lst)
{
	int			curr;
	t_node		*node;

	if (!lst)
		return (0);
	node = lst->head;
	// while (node->next != NULL)
	// {
	// 	if (node->data > node->next->data)
	// 		return (0);
	// 	node = node->next;
	// }
	while (node)
	{	
		curr = node->data;
		while (node->next)
		{
			printf("%d vs %d\n" ,curr, node->next->data);
			if (curr == node->next->data)
			{
				
				return (1);
			}
			curr = node->data;
			node = node->next;
		}
		node = node->next;
		
	}
	return (0);
}

int			is_not_digit(char *str)
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

int			dup_check(int argc, char **argv)
{
	int i;
	int j;
	int tmp;

	i = 1;
	while (i < argc)
	{
		tmp = ft_atoi(argv[i]);
		j = i;
		while (j < argc - 1)
		{
			if (tmp == ft_atoi(argv[j + 1]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void		error_checker(int argc, char **argv)
{
	if (argc <= 1)
		exit(1);
	if (dup_check(argc, argv) == 1)
		error();
	argv++;
	while (*argv)
	{
		if (ft_atoi(*argv) > 2147483647)
			error();
		if ((is_not_digit(*argv)) == 1)
			error();
		argv++;
	}
}
