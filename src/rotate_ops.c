/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 12:12:50 by hrossouw          #+#    #+#             */
/*   Updated: 2018/08/29 12:30:38 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	op_ra(t_stack *stack)
{
	t_node	*temp;

	if (stack->a_head && stack->a_head->next)
	{
		temp = stack->a_head;
		stack->a_head = stack->a_head->next;
		stack->a_head->prev = NULL;
		temp->prev = stack->a_tail;
		temp->next = NULL;
		stack->a_tail->next = temp;
		stack->a_tail = temp;
		//increase size of stack total
		printf("ra");
	}
}

void	op_rb(t_stack *stack)
{
	t_node	*temp;

	if (stack->b_head && stack->b_head->next)
	{
		temp = stack->b_head;
		stack->b_head = stack->b_head->next;
		stack->b_head->prev = NULL;
		temp->prev = stack->b_tail;
		temp->next = NULL;
		stack->b_tail->next = temp;
		stack->b_tail = temp;
		//increase size of stack total
		printf("rb");
	}
}

void	op_rr(t_stack *stack)
{
	t_node *temp;
	if (stack->a_head && stack->a_head->next)
	{
		temp = stack->a_head;
		stack->a_head = stack->a_head->next;
		stack->a_head->prev = NULL;
		temp->prev = stack->a_tail;
		temp->next = NULL;
		stack->a_tail->next = temp;
		stack->a_tail = temp;
	}
	if (stack->b_head && stack->b_head->next)
	{
		temp = stack->b_head;
		stack->b_head = stack->b_head->next;
		stack->b_head->prev = NULL;
		temp->prev = stack->b_tail;
		temp->next = NULL;
		stack->b_tail->next = temp;
		stack->b_tail = temp;
	}
	//increase size of stack total
	printf("rr");
}