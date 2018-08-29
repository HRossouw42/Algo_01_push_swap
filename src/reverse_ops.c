/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 12:36:02 by hrossouw          #+#    #+#             */
/*   Updated: 2018/08/29 14:25:14 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	op_rra(t_stack *stack)
{
	t_node	*temp;

	if (stack->a_head && stack->a_head->next)
	{
		temp = stack->a_tail;
		stack->a_tail = stack->a_tail->prev;
		stack->a_tail->next = NULL;
		temp->next = stack->a_head;
		temp->prev = NULL;
		stack->a_head->prev = temp;
		stack->a_head = temp;
		//increase stack size total
		printf("rra");
	}
}

void	op_rrb(t_stack *stack)
{
	t_node	*temp;

	if (stack->b_head && stack->b_head->next)
	{
		temp = stack->b_tail;
		stack->b_tail = stack->b_tail->prev;
		stack->b_tail->next = NULL;
		temp->next = stack->b_head;
		temp->prev = NULL;
		stack->b_head->prev = temp;
		stack->b_head = temp;
		//increase stack size total
		printf("rrb");
	}
}

void	op_rrr(t_stack *stack)
{
	t_node	*temp;

	if (stack->a_head && stack->a_head->next)
	{
		temp = stack->a_tail;
		stack->a_tail = stack->a_tail->prev;
		stack->a_tail->next = NULL;
		temp->next = stack->a_head;
		temp->prev = NULL;
		stack->a_head->prev = temp;
		stack->a_head = temp;
	}
	if (stack->b_head && stack->b_head->next)
	{
		temp = stack->b_tail;
		stack->b_tail = stack->b_tail->prev;
		stack->b_tail->next = NULL;
		temp->next = stack->b_head;
		temp->prev = NULL;
		stack->b_head->prev = temp;
		stack->b_head = temp;
	}
	//increase stack size total
	printf("rrr");
}
