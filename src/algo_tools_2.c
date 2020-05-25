/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tools_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:20:43 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 17:08:18 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// associates location for specific movement of nodes
int		*setup_move_node(t_hold *node, int totalrange, t_stack *tmp)
{
	int		*sort;

	sort = (int*)ft_memalloc(sizeof(int) * 4);
	sort[0] = totalrange;
	sort[1] = maxval(tmp);
	sort[2] = closestsmaxval(tmp, totalrange, sort[1]);
	sort[3] = maxposition(node->a, sort[2], totalrange);
	return (sort);
}

void	move_node_body(t_hold *node, char *cmd, int data, int size)
{
	if (data >= size / 2)
		rra(node, cmd, 1);
	else if (data < size / 2)
		ra(node, cmd, 1);
}

// decides where current node is moved
// sort is temp holder for location of splits
void	move_node(t_hold *node, int totalrange, int size, char *cmd)
{
	int		*sort;
	t_stack	*tmp;

	tmp = node->a;
	sort = setup_move_node(node, totalrange, tmp);
	while (sort[0] && tmp != NULL)
	{
		if (node->supcolour == 1)
			printout(node, cmd);
		if (tmp->data == sort[2])
		{
			pb(node, cmd, 1);
			sort[0]--;
			tmp = node->a;
			sort[2] = closestsmaxval(tmp, totalrange, sort[1]);
			sort[3] = maxposition(node->a, sort[2], totalrange);
		}
		else
			move_node_body(node, cmd, sort[3], size);
		tmp = node->a;
		if (node->supcolour == 1 || node->vis == 1)
			printout(node, cmd);
		print_debug(node);
	}
}
