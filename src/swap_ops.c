/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:25:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/08/27 16:23:14 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	op_sa(t_stack *stack)
{
	t_node	*temp;

	if (stack->a_head && stack->a_head->next)
	{
		temp = stack->a_head->next;
		if (stack->a_head->next->next)
			stack->a_head->next->next->prev = stack->a_head;
		else
			stack->a_head->next->next->prev = 0;
		if (!(stack->a_head->next->next))
			stack->a_tail = stack->a_head;
		else
			stack->a_tail = 0;
		stack->a_head->next = stack->a_head->next->next;
		stack->a_head->prev = temp;
		temp->prev = NULL;
		temp->next = stack->a_head;
		stack->a_head = temp;
		//TODO : add to stack total
		//TODO : print out
		printf("sa"); //TEST
	}
}

void	op_sb(t_stack *stack)
{
	t_node	*temp;

	if (stack->a_head && stack->a_head->next)
	{

		printf("sb");
	}
}
