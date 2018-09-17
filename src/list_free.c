/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:26:45 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 18:30:12 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_lst(t_list *list)
{
	while (list->data)
	{
		free(list->data);
		list->data = list->next->data;
	}
	free(list->data);
}

void	free_double(t_list *l_a, t_list *l_b)
{
	free_lst(l_a);
	free_lst(l_b);
}

void	destroy_stack(t_list **stack)
{
	t_list			*tmp;
	void			*item;

	tmp = (*stack)->next;
	while (*stack)
	{
		item = (*stack)->data;
		ft_memdel(&item);
		ft_memdel((void**)stack);
		*stack = tmp;
		if (tmp)
			tmp = tmp->next;
	}
}

// void	destroy_stacks(t_s_hold **st)
// {
// 	t_list			*args;
// 	t_list			*stack_a;
// 	t_list			*stack_b;
// 	t_list			*ops;

// 	args = (*st)->args;
// 	stack_a = (*st)->stack_a;
// 	stack_b = (*st)->stack_b;
// 	ops = (*st)->ops;
// 	if (args)
// 		destroy_stack(&args);
// 	if (stack_a)
// 		destroy_stack(&stack_a);
// 	if (stack_b)
// 		destroy_stack(&stack_b);
// 	if (ops)
// 		destroy_stack(&ops);
// 	ft_memdel((void**)st);
// }
