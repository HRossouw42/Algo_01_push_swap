/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:02:13 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/04 11:05:56 by hrossouw         ###   ########.fr       */
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
			ft_putstr(" - ");
			temp = temp ->next;
		}
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	t_list	*la;
	t_list	*lb;

	la = ft_lst_new();
	lb = ft_lst_new();
	while (*argv)
	{
		la = ft_lst_append(la, ft_atoi(*argv));
		argv++;
	}
	lst_print(la);
	return (0);
}