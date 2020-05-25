/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:08:28 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 15:42:43 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	setup_node_range(int *totalrange, t_hold *node)
{
	if (*totalrange != 0)
		*totalrange = *totalrange - (*totalrange / 5);
	else
		*totalrange = node->size / 5;
	if (*totalrange < 5)
		*totalrange = 4;
}

void	sortbackinbody(t_hold *node, char *cmd, int ctoint, int size)
{
	if (ctoint >= size / 2)
		rrb(node, cmd, 1);
	else if (ctoint < size / 2)
		rb(node, cmd, 1);
}

void	return_merge(t_hold *node, char *cmd)
{
	t_stack	*b;
	int		maxint;
	int		ctoint;
	int		size;

	b = node->b;
	size = list_size(b);
	while (b != NULL)
	{
		maxint = maxval(b);
		ctoint = maxposition(b, maxint, 1);
		if (b->pos == maxint)
		{
			pa(node, cmd, 1);
			b = node->b;
			size = list_size(b);
		}
		else
			sortbackinbody(node, cmd, ctoint, size);
		if (node->supcolour == 1 || node->vis == 1)
			printout(node, cmd);
		print_debug(node);
		b = node->b;
	}
}

/*	
	main algo start
	merge sort for larger lists
	see https://en.wikipedia.org/wiki/Merge_sort 
	split stack into nodes, compare nodes, swap values, sort back in, repeat
*/
int		sort(t_hold *node, char *cmd)
{
	t_stack	*a;
	int		size;
	int		totalrange;

	totalrange = 0;
	if (node->size <= 5)
	{
		small_sort(node, cmd);
		return (1);
	}
	while (1)
	{
		a = node->a;
		if (a == NULL)
			return_merge(node, cmd);
		if (is_stack_sorted(node) == 1 && list_size(node->b) == 0)
			break ;
		size = list_size(a);
		setup_node_range(&totalrange, node);
		move_node(node, totalrange, size, cmd);
	}
	if (node->colour == 1)
		printout(node, cmd);
	return (1);
}
