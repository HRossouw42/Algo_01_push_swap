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

# define OK ft_putendl_fd("OK", 1);
# define KO ft_putendl_fd("KO", 1);
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

# define NRM  "\x1B[0m"
# define RED  "\x1B[31m"
# define GRN  "\x1B[32m"
# define YEL  "\x1B[33m"
# define BLU  "\x1B[34m"
# define MAG  "\x1B[35m"
# define CYN  "\x1B[36m"
# define WHT  "\x1B[37m"

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

void				print_debug(t_hold *node);

int					create_stacks(char **str, t_hold *node, int checker);

int					is_stack_sorted(t_hold *node);
int					is_list_sorted(t_stack *list, char ab);
int					is_rev_list(t_list *la);

int					list_size(t_stack *lst);
char				**ft_split(char *str);
t_hold				*prep_memory(void);
int					prep_arg(char **str, t_hold *node, int arc);

t_stack				*startpop(t_stack **list);
t_stack				*endpop(t_stack **list);

int					last_int_value(t_stack *lst);
int					get_max_values(t_hold *node, int size);

int					get_input(t_hold *node);

int					sort(t_hold *node, char *cmd);
int					maxposition(t_stack *lst, int max_val, int totalrange);
void				small_sort(t_hold *node, char *cmd);
void				move_node(t_hold *node, int totalrange, int size, char *cmd);
void				return_merge(t_hold *node, char *cmd);
int					maxval(t_stack *lst);
int					closestsmaxval(t_stack *tmp, int totalrange, int hi);
int					maxposition(t_stack *lst, int max_val, int totalrange);

void				printout(t_hold *node, char *cmd);
void				visualiser(t_hold *node, char *cmd);

#endif
