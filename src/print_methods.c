/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_swap_ops.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:36:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 13:12:57 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//cause 25 limit
int		output(t_stack *temp)
{
	ft_putchar_fd(' ', 2);
	ft_putnbr_fd(temp->data, 2);
	return (1);
}

void	loop(t_stack *tempa, t_stack *tempb, int isplaced, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (tempa != NULL)
		{
			isplaced = output(tempa);
			tempa = tempa->next;
		}
		if (tempb != NULL)
		{
			ft_putchar_fd('\t', 2);
			isplaced = output(tempb);
			tempb = tempb->next;
		}
		i++;
		if (isplaced == 1)
			ft_putchar_fd('\n', 2);
		isplaced = 0;
	}
	ft_putendl_fd("___	___", 2);
	ft_putendl_fd(" a	 b", 2);
}

// output both lists to screen quick and dirty for debugging
void	print_debug(t_hold *node)
{
	t_stack	*tempa;
	t_stack	*tempb;
	int		isplaced;

	if (node->debug == 0)
		return ;
	tempa = node->a;
	tempb = node->b;
	isplaced = 0;
	loop(tempa, tempb, isplaced, node->size);
	
}
