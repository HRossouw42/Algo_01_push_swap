/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 12:12:50 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 13:13:24 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ra(t_hold *node, char *cmd, int set)
{
	t_stack *temp;
	t_stack *tmplist;

	if (listsize(node->a) <= 1)
		return (1);
	temp = startpop(&node->a);
	temp->next = NULL;
	tmplist = node->a;
	while (tmplist->next != NULL)
		tmplist = tmplist->next;
	tmplist->next = temp;
	if (set == 1)
	{
		bzero(cmd, 4);
		ft_strcpy(cmd, "ra");
		RA;
	}
	return (1);
}

int		rb(t_hold *node, char *cmd, int set)
{
	t_stack *temp;
	t_stack *tmplist;

	if (listsize(node->b) <= 1)
		return (1);
	temp = startpop(&node->b);
	temp->next = NULL;
	tmplist = node->b;
	while (tmplist->next != NULL)
		tmplist = tmplist->next;
	tmplist->next = temp;
	if (set == 1)
	{
		bzero(cmd, 4);
		ft_strcpy(cmd, "rb");
		RB;
	}
	return (1);
}

int		rr(t_hold *node, char *cmd, int set)
{
	ra(node, cmd, set);
	rb(node, cmd, set);
	return (1);
}
