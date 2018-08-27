/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:32:28 by hrossouw          #+#    #+#             */
/*   Updated: 2018/08/27 16:23:14 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PUSH_SWAP_H
# define _PUSH_SWAP_H

#include "../libft/includes/libft.h"

typedef struct		s_node
{
	struct s_node	*prev;
	int				data;
	struct s_node	*next;
	
}					t_node;

typedef struct		s_stack
{
	t_node			*a_head;
	t_node			*b_head;
	t_node			*a_tail;
	t_node			*b_tail;
}					t_stack;

void				op_sa(t_stack *stack);
void				op_sb(t_stack *stack);
void				op_ss(t_stack *stack);
void				op_pa(t_stack *stack);
void				op_pb(t_stack *stack);
void				op_ra(t_stack *stack);
void				op_rb(t_stack *stack);
void				op_rr(t_stack *stack);
void				op_rra(t_stack *stack);
void				op_rrb(t_stack *stack);
void				op_rrr(t_stack *stack);
# endif 