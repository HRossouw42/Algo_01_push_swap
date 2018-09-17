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

int		is_list(t_list *lst)
{
	if (lst != NULL && lst->head != NULL && lst->head->next != NULL)
		return (1);
	return (0);
}

void	move_up_a(int smallest, int len, int pos, t_list *la)
{
	int half;

	while (HEADA != smallest)
	{
		if (HEADA != smallest && NEXTA == smallest)
			pr_sa(la);
		else
		{
			while (HEADA != smallest)
			{
				len = find_list_length(la);
				half = half_list(len);
				if (pos > half)
					pr_rra(la);
				else if (pos <= half)
					pr_ra(la);
				len++;
			}
		}
	}
}

int		is_smallest_pos(t_list *lst)
{
	t_node	*node;
	int		smallest;
	int		smallest_pos;

	smallest = is_minimum(lst);
	node = lst->head;
	smallest_pos = 0;
	while (node->data != smallest)
	{
		node = node->next;
		smallest_pos++;
	}
	return (smallest_pos);
}

void	algos_len4(int len, t_list *list_a, t_list *list_b)
{
	if (is_rev_list(list_a) == 1)
	{
		pr_sa(list_a);
		pr_rra(list_a);
		pr_rra(list_a);
		pr_sa(list_a);
	}
	else
	{
		algo_small(len, list_a, list_b);
	}
}
