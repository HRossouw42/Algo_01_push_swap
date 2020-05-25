/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:11:43 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/18 15:31:22 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		stackcmd(char *cmd, t_hold *node)
{
	int	ret;

	ret = 0;
	if (ft_strcmp(cmd, "sa") == 0)
		ret = sa(node, cmd, 0);
	else if (ft_strcmp(cmd, "ra") == 0)
		ret = ra(node, cmd, 0);
	else if (ft_strcmp(cmd, "rra") == 0)
		ret = rra(node, cmd, 0);
	else if (ft_strcmp(cmd, "pa") == 0)
		ret = pa(node, cmd, 0);
	else if (ft_strcmp(cmd, "sb") == 0)
		ret = sb(node, cmd, 0);
	else if (ft_strcmp(cmd, "rb") == 0)
		ret = rb(node, cmd, 0);
	else if (ft_strcmp(cmd, "rrb") == 0)
		ret = rrb(node, cmd, 0);
	else if (ft_strcmp(cmd, "pb") == 0)
		ret = pb(node, cmd, 0);
	else if (ft_strcmp(cmd, "ss") == 0)
		ret = ss(node, cmd, 0);
	else if (ft_strcmp(cmd, "rr") == 0)
		ret = rr(node, cmd, 0);
	else if (ft_strcmp(cmd, "rrr") == 0)
		ret = rrr(node, cmd, 0);
	return (ret);
}

int		commandcheck(char *cmd, t_hold *node)
{
	int	ret;

	ret = 0;
	ret = stackcmd(cmd, node);
	return (ret);
}

// getsnextline from input, checks if its a command, outputs accordingly
int		get_input(t_hold *node)
{
	char	*cmd;
	char	tmp[4];
	int		ret;
	
	//TODO: Check get next line
	while ((ret = ft_get_next_line(0, &cmd)) != 0)
	{
		if (ret != 0)
			ft_strcpy(tmp, cmd);
		if (commandcheck(cmd, node) == 0)
		{
			ERROR;
			exit(1);
		}
		print_debug(node);
		if (node->supcolour == 1 || node->vis == 1)
			printout(node, cmd);
	}
	printout(node, tmp);
	if (is_stack_sorted(node) == 1)
	{
		OK;
		exit(1);
	}
	KO;
	return (1);
}
