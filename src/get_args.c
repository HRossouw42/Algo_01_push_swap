/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:11:22 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/18 15:43:28 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int create_list(char **str, t_hold *node)
{
	int i;
	int size;
	t_stack *ret;

	i = 0;
	size = 0;
	ret = node->a;
	while (str[size])
		size++;
	while (i < (size - (node->debug + node->colour + node->supcolour +
						node->vis + 1)))
	{
		ret->next = (t_stack *)malloc(sizeof(t_stack));
		ret = ret->next;
		ret->data = 0;
		ret->pos = 0;
		i++;
	}
	ret->next = NULL;
	node->b = NULL;
	return (1);
}

int error_check(t_hold *node, int checker)
{
	t_stack *temp;
	t_stack *list;

	temp = node->a;
	if (checker == 1)
		return (1);
	while (temp != NULL)
	{
		list = temp;
		list = list->next;
		while (list != NULL)
		{
			if (list->data == temp->data)
			{
				ERROR;
				return (0);
			}
			list = list->next;
		}
		temp = temp->next;
	}
	return (1);
}

// populates arguments into a linked list while checking for extra command flags
int create_stacks(char **str, t_hold *node, int checker)
{
	int i;
	int dx;
	t_stack *ret;

	create_list(str, node);
	ret = node->a;
	i = 0;
	while (str[i])
	{
		dx = 0;
		while (ft_isspace(str[i][dx]) == 1)
			dx++;
		if (!(str[i][dx] == '-' && str[i][dx + 1] == 'v') &&
			!(str[i][dx] == '-' && str[i][dx + 1] == 'c'))
		{
			ret->data = atoi(str[i]);
			ret = ret->next;
			if (ret == NULL)
				return (error_check(node, checker));
		}
		i++;
	}
	ret->next = NULL;
	return (error_check(node, checker));
}
