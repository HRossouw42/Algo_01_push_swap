/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:25:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 17:07:08 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		sa(t_hold *node, char *cmd, int set)
{
	t_stack	*temp;
	t_stack	*tempnext;

	temp = node->a;
	if (temp == NULL)
		return (1);
	if (temp->next == NULL)
		return (1);
	temp = node->a;
	tempnext = temp->next;
	temp->next = tempnext->next;
	tempnext->next = temp;
	node->a = tempnext;
	if (set == 1)
	{
		bzero(cmd, 4);
		ft_strcpy(cmd, "sa");
		SA;
	}
	return (1);
}

int		ss(t_hold *node, char *cmd, int set)
{
	sa(node, cmd, set);
	sb(node, cmd, set);
	return (1);
}
