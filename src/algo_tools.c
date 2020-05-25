/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:08:49 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 16:59:35 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		closestsmaxval(t_stack *tmp, int totalrange, int hi)
{
	int		low;
	t_stack	*a;

	a = tmp;
	low = hi - totalrange;
	if (low < 0)
		low = 0;
	while (a != NULL)
	{
		if ((a->pos > low && a->pos <= hi))
		{
			return (a->data);
		}
		a = a->next;
	}
	return (0);
}

int		maxposition(t_stack *lst, int max_val, int totalrange)
{
	int		count;
	int		lower;
	t_stack	*a;

	count = 0;
	a = lst;
	lower = max_val - totalrange;
	if (lower < 0)
		lower = 0;
	while (a != NULL)
	{
		if ((a->pos > lower && a->pos <= max_val))
		{
			return (count);
		}
		a = a->next;
		count++;
	}
	return (count);
}

// value of last intiger 
int		last_int_value(t_stack *lst)
{
	t_stack *tmp;
	int		i;

	i = 0;
	tmp = lst;
	if (tmp == NULL)
		return (0);
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	i = tmp->data;
	return (i);
}
