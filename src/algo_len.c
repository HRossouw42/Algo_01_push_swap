/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:44:57 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/13 15:57:26 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algos_len2(t_list *list_a)
{
	if (list_a->head->data > list_a->head->next->data)
		pr_sa(list_a);
}

void	algos_len3(t_list *list_a, t_list *list_b)
{
	if (list_a->head->data < list_a->head->next->data)
	{
		pr_rra(list_a);
		if (is_sorted_list(list_a) == 0)
			pr_sa(list_a);
	}
	else if (list_a->head->data > list_a->head->next->data)
	{
		if (list_a->head->data > list_a->tail->data)
		{
			pr_ra(list_a);
			if (is_sorted_list(list_a) == 0)
				pr_sa(list_a);
		}
		else
			pr_sa(list_a);
	}
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
		algos_smallest_first(len, list_a);
		pr_pb(list_a, list_b);
		algos_len3(list_a, list_b);
		pr_pa(list_a, list_b);
	}
}

void		algo_small(int len, t_list *la, t_list *lb)
{
	int len2;

	len2 = 0;
	while (len > 3)
	{
		algos_smallest_first(len, la);
		pr_pb(la, lb);
		len--;
		len2++;
	}
	algos_len3(la, lb);
	while (len2 != 0)
	{
		pr_pa(la, lb);
		len2--;
	}
}

void		algo_medium(int len, t_list *la, t_list *lb)
{
	int len2;

	len2 = 0;
	while (len > 3)
	{
		if (la->head->data < la->head->next->data)
			pr_pb(la, lb);
		else
		{
			algos_smallest_first(len, la);
			pr_pb(la, lb);
			if (la->head->data > la->head->next->data)
				pr_sa(la);
		}
		len--;
		len2++;
	}
	algos_len3(la, lb);
	while (len2 != 0)
	{
		pr_pa(la, lb);
		len2--;
	}
}

void	algo_large(t_list *la, t_list *lb)
{
	int		store;

	while (!(is_sorted_list(la)) || ft_lst_len(lb) != 0)
	{
		if (get_first(la) > get_second(la))
			pr_sa(la);
		else if (get_first(la) > get_last(la))
			pr_rra(la);
		else if (get_first(la) < get_last(lb))
			pr_pb(la, lb);
		else if (get_first(la) < get_first(lb))
		{
			store = get_first(la);
			pr_ra(la);
			while (get_first(lb) > store)
				pr_pa(la, lb);
			pr_rra(la);
		}
		else if (is_sorted_list(la) &&
		get_first(la) > get_first(lb) && get_first(lb) != 0)
			move_lst_ba(la, lb);
		else
			pr_pb(la, lb);
	}
}
