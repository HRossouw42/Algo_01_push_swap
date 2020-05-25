/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:52:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/17 13:34:44 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// linked list size
int		list_size(t_stack *lst)
{
	int		count;
	t_stack	*tmp;

	count = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

//pop first element in list
t_stack		*startpop(t_stack **list)
{
	t_stack	*ret;

	if (*list == NULL)
		return (NULL);
	ret = (*list);
	(*list) = (*list)->next;
	return (ret);
}

//pop last element in list
t_stack		*endpop(t_stack **list)
{
	int		size;
	t_stack	*tmp;
	t_stack	*lst;

	if (*list == NULL)
		return (NULL);
	size = list_size(*list);
	if (size <= 1)
		return (NULL);
	tmp = (*list);
	lst = (*list);
	while (tmp->next != NULL)
		tmp = tmp->next;
	while (lst->next->next != NULL)
		lst = lst->next;
	if (tmp == NULL)
	{
		ERROR;
		return (NULL);
	}
	lst->next = NULL;
	return (tmp);
}

// highest value in the list
int		max_val(t_stack *list)
{
	int		hi;
	t_stack	*tmp;

	tmp = list;
	hi = -2147483648;
	while (tmp != NULL)
	{
		if (tmp->data > hi)
			hi = tmp->data;
		tmp = tmp->next;
	}
	return (hi);
}

// compare prev highest val with current
int		max_val_stack(t_stack *list, int prevmax)
{
	int		hi;
	t_stack	*tmp;

	tmp = list;
	hi = -2147483648;
	while (tmp != NULL)
	{
		if (tmp->data > hi && tmp->data < prevmax)
			hi = tmp->data;
		tmp = tmp->next;
	}
	return (hi);
}

int		ispossorted(t_stack *list)
{
	t_stack	*tmpa;

	tmpa = list;
	while (tmpa != NULL)
	{
		if (tmpa->pos == 0)
			return (0);
		tmpa = tmpa->next;
	}
	return (1);
}

// iterate through list, getting max values of list 
int		get_max_values(t_hold *node, int size)
{
	int		tmpmax;
	t_stack *a;

	a = node->a;
	tmpmax = max_val(a);
	while (size != 0)
	{
		while (a != NULL)
		{
			if (a->data == tmpmax)
			{
				a->pos = size;
				size--;
				a = node->a;
				tmpmax = max_val_stack(a, tmpmax);
				break ;
			}
			a = a->next;
		}
		a = node->a;
	}
	return (1);
}
