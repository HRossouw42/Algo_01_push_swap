/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:52:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/11 16:22:04 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			get_first(t_list *lst)
{
	int		ret;
	t_node	*tmp;

	ret = 0;
	tmp = lst->head;
	if (lst)
		ret = tmp->data;
	printf("got first= %d\n", ret);
	return (ret);
}

int			get_second(t_list *lst)
{
	int		ret;
	t_node	*tmp;

	ret = 0;
	tmp = lst->head;
	if (lst)
	{
		if (tmp->next)
		{
			ret = tmp->next->data;
		}
	}
	printf("got second= %d\n", ret);
	return (ret);
}

int			get_last(t_list *lst)
{
	int		ret;
	t_node	*tmp;

	ret = 0;
	tmp = lst->head;
	if (lst)
	{
		while (tmp->next)
			tmp = tmp->next;
		ret = tmp->data;
	}
	printf("got last= %d\n", ret);
	return (ret);
}
