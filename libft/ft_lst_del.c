/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_del.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 12:48:48 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/03 12:55:38 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*ft_lst_del(t_list *lst, t_node *node)
{
	if (node->next == NULL && node->prev == NULL)
	{
		lst->head = NULL;
		lst->tail = NULL;
	}
	else if (node->prev == NULL)
	{
		lst->head = node->next;
		lst->head->prev = NULL;
	}
	else if (node->next == NULL)
	{
		lst->tail = node->prev;
		lst->tail->next = NULL;
	}
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}
	free(node);
	node = NULL;
	lst->len--;
	return (lst);
}