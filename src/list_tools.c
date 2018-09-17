/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:52:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 13:12:42 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			get_first(t_list *lst)
{
	int		ret;
	t_node	*tmp;

	ret = 0;
	tmp = lst->head;
	if (tmp)
		ret = tmp->data;
	return (ret);
}

int			get_second(t_list *lst)
{
	int		ret;
	t_node	*tmp;

	ret = 0;
	tmp = lst->head;
	if (tmp)
	{
		if (tmp->next != NULL)
		{
			ret = tmp->next->data;
		}
	}
	return (ret);
}

int			get_last(t_list *lst)
{
	int		ret;
	t_node	*tmp;

	ret = 0;
	tmp = lst->head;
	if (tmp)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		ret = tmp->data;
	}
	return (ret);
}

void	move_lst_ba(t_list *la, t_list *lb)
{
	t_node *tmp;

	tmp = lb->head;
	if (tmp)
	{
		while (tmp)
		{
			pr_pa(la, lb);
			tmp = tmp->next;
		}
	}
}
