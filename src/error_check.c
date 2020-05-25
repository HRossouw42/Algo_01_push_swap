/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:09:55 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 13:11:10 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//max val in list
int		maxval(t_stack *lst)
{
	int		hi;
	t_stack	*tmp;

	tmp = lst;
	hi = -2147483648;
	while (tmp != NULL)
	{
		if (tmp->pos > hi)
			hi = tmp->pos;
		tmp = tmp->next;
	}
	return (hi);
}
