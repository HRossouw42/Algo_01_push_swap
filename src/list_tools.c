/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:52:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/11 16:03:01 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

/*
** Get first:
** Retrieves the integer value of the first element's
** content from a list.
*/

int			get_first(t_list *lst)
{
	int		ret;

	ret = 0;
	if (lst)
		ret = *(int*)lst->content;
	printf("got first= %d\n", ret);
	return (ret);
}

/*
** Get second:
** Retrieves the integer value of the second element's
** content from a list if there is a second element.
*/

int			get_second(t_list *lst)
{
	int		ret;

	ret = 0;
	if (lst)
	{
		if (lst->next)
		{
			ret = *(int*)lst->next->content;
		}
	}
	printf("got second= %d\n", ret);
	return (ret);
}
