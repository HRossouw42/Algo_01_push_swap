/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 12:36:02 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 13:13:18 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		rra(t_hold *node, char *cmd, int set)
{
	t_stack	*tmp;
	t_stack	*lst;

	if (list_size(node->a) <= 1)
		return (1);
	tmp = endpop(&node->a);
	if (tmp == NULL)
		return (1);
	lst = (node->a);
	tmp->next = lst;
	lst = tmp;
	node->a = lst;
	if (set == 1)
	{
		bzero(cmd, 4);
		ft_strcpy(cmd, "rra");
		RRA;
	}
	return (1);
}

int		rrb(t_hold *node, char *cmd, int set)
{
	t_stack	*tmp;
	t_stack	*lst;

	if (list_size(node->b) <= 1)
		return (1);
	tmp = endpop(&node->b);
	if (tmp == NULL)
		return (1);
	lst = (node->b);
	tmp->next = lst;
	lst = tmp;
	node->b = lst;
	if (set == 1)
	{
		bzero(cmd, 4);
		ft_strcpy(cmd, "rrb");
		RRB;
	}
	return (1);
}

int		rrr(t_hold *node, char *cmd, int set)
{
	rra(node, cmd, set);
	rrb(node, cmd, set);
	return (1);
}
