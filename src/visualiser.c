/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualiser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:53:55 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 13:13:33 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

void	lst_print(t_list *lst)
{
	t_node *temp;

	if (lst != NULL)
	{
		temp = lst->head;
		while (temp)
		{
			ft_putnbr_fd(temp->data, 2);
			if (temp->next != NULL)
				ft_putstr_fd(" - ", 2);
			temp = temp->next;
		}
		ft_putchar_fd('\n', 2);
	}
}

void	print_stacks(t_list *la, t_list *lb)
{
	clearScreen();
	ft_putstr_fd("Stack A: ", 2);
	lst_print(la);
	ft_putstr_fd("\nStack B: ", 2);
	lst_print(lb);
	ft_putstr_fd("\n", 2);
}
