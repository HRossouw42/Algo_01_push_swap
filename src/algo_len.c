/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:07:51 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 17:08:28 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void algos_len2(t_list *list_a)
{
	while (list_a != NULL)
	{
		if (is_sorted_list(list_a))
			break;
		else if (get_first(list_a) > get_last(list_a))
			pr_sa(list_a);
	}
}

void algos_len3(t_list *la)
{
	while (la != NULL)
	{
		if (is_sorted_list(la))
			break;
		else if (HEADA < NEXTA)
		{
			pr_rra(la);
			if (is_sorted_list(la) == 0)
				pr_sa(la);
		}
		else if (HEADA > NEXTA)
		{
			if (HEADA > TAILA)
				pr_ra(la);
			if (is_sorted_list(la) == 0)
				pr_sa(la);
		}
		else
			pr_sa(la);
	}
}

void algo_small(int len, t_list *la, t_list *lb)
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
	algos_len3(la);
	while (len2 != 0)
	{
		pr_pa(la, lb);
		len2--;
	}
}

void algo_medium(int len, t_list *la, t_list *lb)
{
	int len2;

	len2 = 0;
	while (len > 3)
	{
		algos_smallest_first(len, la);
		pr_pb(la, lb);
		if (is_sorted_list(la))
			break;
		len--;
		len2++;
	}
	algos_len3(la);
	while (len2 != 0)
	{
		while (lb->head != NULL)
			pr_pa(la, lb);
		len2--;
	}
}

void algo_largest(t_list *la, t_list *lb)
{
	int store;

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

void	algo_large(t_list *la, t_list *lb) 
{
	int			store;
	ft_putstr("RUNNING");

	while (!is_sorted(la, lb) || ft_lst_len(lb) != 0)
	{
		if (get_first(la) > get_second(la))
			pr_sa(la);
		else if (get_first(la) > get_last(la))
			pr_ra(la);
		else if (get_first(la) < get_last(lb))
		{
			//COMBO
			pr_pb(la, lb);
			if (ft_lst_len(lb) > 1){
				pr_rb(lb);
			}
			// push_b_bot(st, 0);
		}
		else if (get_first(la) < get_first(lb))
		{
			store = get_first(la);
			pr_ra(la);
			while (get_first(lb) > store)
				pr_pa(la, lb);
			pr_rra(la);
		}
		else if (is_sorted(la, lb) &&
				get_first(la) > get_first(lb)){
					while(lb)
						pr_pa(la, lb);
				}
		else
			pr_pb(la, lb);
	}
}
