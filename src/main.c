/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:02:13 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/03 12:45:15 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list		*new_list(void)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new != NULL)
	{
		new->len = 0;
		new->head = NULL;
		new->tail = NULL;
	}
	return (new);
}

int		main(int argc, char **argv)
{
	t_list	*la;
	t_list	*lb;

	la = new_list();
	lb = new_list();
	while (*argv)
	{
		la = ft_lst_append(la, ft_atoi(*argv));
		argv++;
	}
	printf("LOLOLOLOL");
	printf("Seriously, stop");
	return (0);
}