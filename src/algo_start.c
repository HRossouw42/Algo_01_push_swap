/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:10:06 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/11 12:53:42 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo_reverse(int len, t_list *list_a, t_list *list_b)
{
	while (len > 3)
	{
		pr_pb(list_a, list_b);
		len--;
	}
	pr_sa(list_a);
	pr_rra(list_a);
	while (list_b->head != NULL)
	{
		pr_pa(list_a, list_b);
		pr_ra(list_a);
	}
}

void	algo_start(t_list *la, t_list *lb)
{
	int len;

	len = find_list_length(la);
	if ((is_rev_list(la) == 1) && len > 2)
		algo_reverse(len, la, lb);
	else if (len == 2)
		algos_len2(la);
	else if (len == 3)
		algos_len3(la, lb);
	else if (len == 4)
		algos_len4(len, la, lb);
	else if (len <= 10)
		algo_small(len, la, lb);
	else if (len <= 500)
		algo_medium(len, la, lb);
}