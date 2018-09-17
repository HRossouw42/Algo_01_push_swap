/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tools_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:20:43 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 16:29:32 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
