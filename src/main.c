/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:02:13 by hrossouw          #+#    #+#             */
/*   Updated: 2018/08/31 12:24:23 by hrossouw         ###   ########.fr       */
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

t_list		*add_head(t_list *lst, int data)
{
	t_node	*node;

	if (lst != NULL)
	{
		node = (t_node *)malloc(sizeof(t_node));
		if (node != NULL)
		{
			node->data = data;
			node->next = NULL;
			printf("%d\n", node->data);//test
			if (lst->tail == NULL)
			{
				node->prev = NULL;
				lst->head = node;
				lst->tail = node;
			}
			else
			{
				node->prev = lst->tail;
				lst->tail->next = node;
				lst->tail = node;
			}
			lst->len++;
		}
	}
	return (lst);
}

int		main(int argc, char **argv)
{
	t_list	*la;
	t_list	*lb;

	la = new_list();
	lb = new_list();
	while (*argv++)
	{
		la = add_head(la, ft_atoi(*argv));
	}
	return (0);
}