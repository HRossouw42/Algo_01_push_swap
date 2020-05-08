/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:32:28 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/18 15:14:00 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PUSH_SWAP_H
# define _PUSH_SWAP_H

# include "../libft/includes/libft.h"

# define FREEDOM	(free3(la), free3(lb);)
# define HEADA		la->head->data
# define NEXTA		la->head->next->data
# define NEXEXTA	la->head->next->next->data
# define TAILA		la->tail->data
# define PREVA		la->tail->prev->data
# define PREVEVA	la->tail->prev->prev->data

# define HEAD		lst->head->data
# define NEXT		lst->head->next->data
# define NEXEXT		lst->head->next->next->data
# define TAIL		lst->tail->data
# define PREV		lst->tail->prev->data
# define PREVEV		lst->tail->prev->prev->data

# define HEADB		lb->head->data
# define NEXTB     	lb->head->next->data
# define NEXEXTB  	lb->head->next->next->data
# define TAILB      lb->tail->data
# define PREVB     	lb->tail->prev->data
# define PREVEVB   	lb->tail->prev->prev->data

typedef struct		s_stack
{
	t_node			*a_head;
	t_node			*b_head;
	t_node			*a_tail;
	t_node			*b_tail;
	int				index;
}					t_stack;

int					is_list(t_list *list);

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

void				print_stacks(t_list *la, t_list *lb);

void				get_input(t_list *la, t_list *lb);
int					is_sorted(t_list *la, t_list *lb);
int					is_sorted_list(t_list *lst);
int					is_rev_list(t_list *la);

void				ok(void);
void				error(void);
void				ko(void);

void				pr_sa(t_list *lst);
void				pr_sb(t_list *lst);
void				pr_ss(t_list *la, t_list *lb);
void				pr_sa(t_list *lst);
void				pr_pa(t_list *la, t_list *lb);
void				pr_pb(t_list *la, t_list *lb);
void				pr_ra(t_list *lst);
void				pr_rb(t_list *lst);
void				pr_rrr(t_list *la, t_list *lb);
void				pr_rra(t_list *lst);
void				pr_rrb(t_list *lst);
void				pr_rrr(t_list *la, t_list *lb);

void				algo_start(t_list *la, t_list *lb);
void				algos_len2(t_list *list_a);
void				algos_len3(t_list *list_a);
void				algos_len4(int len, t_list *list_a, t_list *list_b);

void				is_max(t_list *lst);
void				algos_smallest_first(int len, t_list *la);
void				is_max(t_list *lst);
int					is_minimum(t_list *lst);

void				algo_small(int len, t_list *la, t_list *lb);
void				algo_medium(int len, t_list *la, t_list *lb);
void				algo_large(t_list *la, t_list *lb);
void				algo_rev(int len, t_list *list_a, t_list *list_b);

int					half_list(int len);

void				error_checker(int argc, char **argv, t_list *lst);

void				lst_print(t_list *lst);

t_list				*get_args(int len, char **argv);

int					has_duplicates(t_list *lst);

int					find_list_length(t_list *list);
int					get_first(t_list *lst);
int					get_second(t_list *lst);
int					get_last(t_list *lst);
int					is_smallest_pos(t_list *lst);

void				move_lst_ba(t_list *la, t_list *lb);
void				move_up_a(int smallest, int len, int pos, t_list *la);

void				destroy_stack(t_list **stack);
void				free_lst(t_list *list);
void				free_array(char ***stack);
void				move_list_b_to_a(t_list *la, t_list *lb);
#endif
