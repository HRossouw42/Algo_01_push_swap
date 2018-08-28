/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:25:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/08/28 12:07:53 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* 
** TODO: add to stack total && print out without printf
** MAYBE: visualiser
*/ 

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
		printf("sa"); //TEST
	}
}

void	op_sb(t_stack *stack)
{
	t_node	*temp;

	if (stack->b_head && stack->b_head->next)
	{
		temp = stack->b_head->next;
		if (stack->b_head->next->next)
			stack->b_head->next->next->prev = stack->b_head;
		else
			stack->b_head->next->next->prev = 0;
		if (!(stack->b_head->next->next))
			stack->b_tail = stack->b_head;
		else
			stack->b_tail = 0;
		stack->b_head->next = stack->b_head->next->next;
		stack->b_head->prev = temp;
		temp->prev = NULL;
		temp->next = stack->b_head;
		stack->b_head = temp;
		printf("sb"); //TEST
	}
}

void	op_ss(t_stack *stack)
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
	}

	temp = stack->b_head->next;
	if (stack->b_head && stack->b_head->next)
	{
		temp = stack->b_head->next;
		if (stack->b_head->next->next)
			stack->b_head->next->next->prev = stack->b_head;
		else
			stack->b_head->next->next->prev = 0;
		if (!(stack->b_head->next->next))
			stack->b_tail = stack->b_head;
		else
			stack->b_tail = 0;
		stack->b_head->next = stack->b_head->next->next;
		stack->b_head->prev = temp;
		temp->prev = NULL;
		temp->next = stack->b_head;
		stack->b_head = temp;
	}
	printf("ss");
}