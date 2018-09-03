/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:32:28 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/03 15:34:02 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PUSH_SWAP_H
# define _PUSH_SWAP_H

#include "../libft/includes/libft.h"

typedef struct		s_stack
{
	t_node			*a_head;
	t_node			*b_head;
	t_node			*a_tail;
	t_node			*b_tail;
	int				index;
}					t_stack;

void				is_list(t_list *list);
void				swap(t_list *list);
void				op_sa(t_list *lst);
void				op_sb(t_list *lst);
void				op_ss(t_list *la, t_list *lb);
void				op_pa(t_list *la, t_list *lb);
void				op_pb(t_list *la, t_list *lb);
void				rotate(t_list *lst);
void				op_ra(t_list *lst);
void				op_rb(t_list *lst);
void				op_rr(t_list *la, t_list *lb);
void				op_rra(t_list *lst);
void				op_rrb(t_list *lst);
void				op_rrr(t_list *la, t_list *lb);
# endif 