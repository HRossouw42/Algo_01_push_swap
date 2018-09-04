/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualiser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:53:55 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/04 11:57:26 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	lst_print(t_list *lst)
{
	t_node *temp;

	if (lst != NULL)
	{
		temp = lst->head;
		while(temp)
		{
			ft_putnbr(temp->data);
			if (temp->next != NULL)
				ft_putstr(" - ");
			temp = temp ->next;
		}
	}
}

void	print_stacks(t_list *la, t_list *lb)
{
	ft_putstr("Stack A: ");
	lst_print(la);
	ft_putstr("\nStack B: ");
	lst_print(lb);
	ft_putstr("\n");
}
