/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:26:45 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/18 15:12:55 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_lst(t_list *list)
{
	t_node	*current;

	current = list->head;
	if (current == NULL)
		free(current);
	else
	{
		while (current != NULL)
		{
			free(current);
			current = current->next;
		}
	}
	free(list);
}

void	free_double(t_list *l_a, t_list *l_b)
{
	free_lst(l_a);
	free_lst(l_b);
}

void	free_array(char ***stack)
{
	char	**array;

	array = *stack;
	while (*array)
	{
		free(*array);
		array++;
	}
	free(*stack);
}
