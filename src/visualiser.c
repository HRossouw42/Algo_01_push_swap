/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualiser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:53:55 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 13:13:33 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

int				*prev_cmd_a(char *cmd, t_stack *temp)
{
	int *ret;

	ret = (int*)malloc(sizeof(int) * 2);
	ret[0] = -1;
	ret[1] = -1;
	if (ft_strcmp(cmd, "sa") == 0 || ft_strcmp(cmd, "ss") == 0)
	{
		ret[0] = 0;
		ret[1] = 1;
	}
	else if (ft_strcmp(cmd, "ra") == 0 || ft_strcmp(cmd, "rr") == 0)
	{
		if (list_size(temp) == 1)
			ft_putstr(GRN);
	}
	else if (ft_strcmp(cmd, "rra") == 0 || ft_strcmp(cmd, "rrr") == 0)
		ret[0] = 0;
	else if (ft_strcmp(cmd, "pa") == 0)
		ret[0] = 0;
	return (ret);
}

int				*prev_cmd_b(char *cmd, t_stack *temp)
{
	int *ret;

	ret = (int*)malloc(sizeof(int) * 2);
	ret[0] = -1;
	ret[1] = -1;
	if (ft_strcmp(cmd, "sb") == 0 || ft_strcmp(cmd, "ss") == 0)
	{
		ret[0] = 0;
		ret[1] = 1;
	}
	else if (ft_strcmp(cmd, "rb") == 0 || ft_strcmp(cmd, "rr") == 0)
	{
		if (list_size(temp) == 1)
			ft_putstr(GRN);
	}
	else if (ft_strcmp(cmd, "rrb") == 0 || ft_strcmp(cmd, "rrr") == 0)
		ret[0] = 0;
	else if (ft_strcmp(cmd, "pb") == 0)
		ret[0] = 0;
	return (ret);
}

static int		output(t_stack *temp, int count, char *cmd, int ab)
{
	int *loc;

	if (ab == 1)
		loc = prev_cmd_a(cmd, temp);
	else
		loc = prev_cmd_b(cmd, temp);
	if ((count == loc[0] || count == loc[1]) && loc[0] != -1)
		ft_putstr(GRN);
	ft_putchar_fd(' ', 2);
	ft_putnbr_fd(temp->data, 2);
	ft_putstr(NRM);
	return (1);
}

static void		loop(t_stack *tempa, t_stack *tempb, int isplaced, char *cmd)
{
	int count;

	count = 0;
	while (tempa || tempb)
	{
		if (tempa != NULL)
		{
			isplaced = output(tempa, count, cmd, 1);
			tempa = tempa->next;
		}
		if (tempb != NULL)
		{
			ft_putchar_fd('\t', 2);
			isplaced = output(tempb, count, cmd, 2);
			tempb = tempb->next;
		}
		if (isplaced == 1)
			ft_putchar_fd('\n', 2);
		isplaced = 0;
		count++;
	}
}

void		print_b(t_stack *b)
{
	int i;

	ft_putstr(YEL);
	while (b != NULL)
	{
		i = b->pos * 2;
		while (i > 0)
		{
			ft_putchar_fd('#', 2);
			i--;
		}
		ft_putchar_fd('\n', 2);
		b = b->next;
	}
}

void		print_a(t_stack *a)
{
	int		i;

	ft_putstr(GRN);
	while (a != NULL)
	{
		i = a->pos * 2;
		while (i > 0)
		{
			ft_putchar_fd('#', 2);
			i--;
		}
		ft_putchar_fd('\n', 2);
		a = a->next;
	}
}

void		visualiser(t_hold *node, char *cmd)
{
	t_stack *a;
	t_stack *b;

	a = node->a;
	b = node->b;
	(void)cmd;

	clearScreen();

	print_a(a);
	print_b(b);
	ft_putstr(NRM);
}

void		printout(t_hold *node, char *cmd)
{
	t_stack	*tempa;
	t_stack	*tempb;
	int		isplaced;

	if (node->vis == 1)
		visualiser(node, cmd);
	if (node->colour != 1 && node->supcolour != 1)
		return ;
	tempa = node->a;
	tempb = node->b;
	isplaced = 0;
	loop(tempa, tempb, isplaced, cmd);
	ft_putendl_fd("___	___ \n a	 b", 2);
}
