/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:26:45 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/18 15:12:55 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_hold	*malloctime(void)
{
	t_hold	*ret;

	ret = (t_hold*)malloc(sizeof(t_hold));
	ret->loc = 0;
	ret->size = 0;
	ret->debug = 1;
	ret->colour = 0;
	ret->supcolour = 0;
	ret->vis = 0;
	ret->a = (t_stack*)malloc(sizeof(t_stack));
	ret->b = (t_stack*)malloc(sizeof(t_stack));
	ret->a->data = 0;
	ret->a->pos = 0;
	ret->b->data = 0;
	ret->b->pos = 0;
	return (ret);
}

int		isvalidflag(char *s, t_hold *node)
{
	int i;

	i = 0;
	if (s[i] == '-' && s[i + 1] == 'v')
	{
		node->vis = 1;
		return (1);
	}
	if (s[i] == '-' && s[i + 1] == 'c')
	{
		node->colour = 1;
		return (1);
	}
	if (s[i] == '-' && s[i + 1] == 's')
	{
		node->supcolour = 1;
		return (1);
	}
	if (s[i] == '-' && s[i + 1] == 'd')
	{
		node->debug = 1;
		return (1);
	}
	return (0);
}

int		isflag(char *s, t_hold *node)
{
	int i;

	i = 0;
	if (isvalidflag(s, node) == 1)
		return (1);
	i++;
	while (s[0] == '-' && (s[i] >= '0' && s[i] <= '9'))
	{
		i++;
		if (s[i] == '\0')
			return (1);
	}
	return (0);
}

int		isvalid(char *s, t_hold *node)
{
	int	i;

	i = 0;
	while (s[i])
	{
		while (ft_isspace(s[i]) == 1 && s[i] != '\0')
			i++;
		if (ft_strcmp(s + i, "2147483648") == 0 ||
			ft_strcmp(s + i, "-2147483649") == 0)
			return (0);
		if ((!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0'))
		{
			if (isflag(s + i, node) == 1)
				return (1);
			else
				return (0);
		}
		i++;
	}
	return (i);
}

int		sizefind(t_hold *node)
{
	int	i;

	i = 0;
	while (node->raw[i] != NULL)
	{
		i++;
	}
	i -= (node->debug + node->colour);
	return (i);
}
int		searchandmalloc(char **str, t_hold *node, int arc)
{
	int	i;

	i = 0;
	if (arc == 2)
	{
		node->raw = ft_split(str[1]);
	}
	else
	{
		node->raw = str + 1;
	}
	while (node->raw[i] != NULL)
	{
		if (isvalid(node->raw[i], node) == 0)
		{
			ERROR;
			return (0);
		}
		i++;
	}
	node->size = sizefind(node);
	return (i);
}
