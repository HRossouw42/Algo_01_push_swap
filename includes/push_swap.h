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

# define ERROR ft_putendl_fd("Error", 2);

# define SA ft_putendl_fd("sa", 1);
# define SB ft_putendl_fd("sb", 1);
# define SS ft_putendl_fd("ss", 1);
# define PA ft_putendl_fd("pa", 1);
# define PB ft_putendl_fd("pb", 1);
# define RA ft_putendl_fd("ra", 1);
# define RB ft_putendl_fd("rb", 1);
# define RRA ft_putendl_fd("rra", 1);
# define RRB ft_putendl_fd("rrb", 1);
# define RR ft_putendl_fd("rr", 1);
# define RRR ft_putendl_fd("rrr", 1);

typedef	struct		s_stack
{
	int				data;
	int				pos;
	struct s_stack	*next;
}					t_stack;

typedef	struct		s_pushswap
{
	t_stack			*a;
	t_stack			*b;
	char			**raw;
	int				loc;
	int				size;
	int				debug;
	int				vis;
	int				colour;
	int				supcolour;
}					t_hold;

int					is_list(t_list *list);

int					sa(t_hold *node, char *cmd, int set);
int					sb(t_hold *node, char *cmd, int set);
int					ss(t_hold *node, char *cmd, int set);

int					pa(t_hold *node, char *cmd, int set);
int					pb(t_hold *node, char *cmd, int set);

int					ra(t_hold *node, char *cmd, int set);
int					rb(t_hold *node, char *cmd, int set);

int					rra(t_hold *node, char *cmd, int set);
int					rrb(t_hold *node, char *cmd, int set);

int					rr(t_hold *node, char *cmd, int set);
int					rrr(t_hold *node, char *cmd, int set);

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
