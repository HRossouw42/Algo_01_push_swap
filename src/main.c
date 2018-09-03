/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:02:13 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/03 17:23:36 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list		*new_list(void)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new != NULL)
	{
		new->len = 0;
		new->head = NULL;
		new->tail = NULL;
	}
	return (new);
}

void	lst_print(t_list *lst)
{
	t_node *temp;

	temp = lst->data;
	while(temp)
	{
		ft_putnbr(temp->data);
		temp= temp->next;
	}
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
	//lst_print(la);
	return (0);
}