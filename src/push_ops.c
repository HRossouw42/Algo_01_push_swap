/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:05:01 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 17:05:24 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		pa(t_hold *node, char *cmd, int set)
{
	t_stack	*tempb;

	if (node->b == NULL)
	{
		return (1);
	}
	tempb = startpop(&node->b);
	if (tempb == NULL)
		return (1);
	tempb->next = node->a;
	node->a = tempb;
	if (set == 1)
	{
		bzero(cmd, 4);
		ft_strcpy(cmd, "pa");
		PA;
	}
	return (1);
}

int		pb(t_hold *node, char *cmd, int set)
{
	t_stack	*tempa;

	if (node->a == NULL)
	{
		return (1);
	}
	tempa = startpop(&node->a);
	if (tempa == NULL)
		return (1);
	tempa->next = node->b;
	node->b = tempa;
	if (set == 1)
	{
		bzero(cmd, 4);
		ft_strcpy(cmd, "pb");
		PB;
	}
	return (1);
}
