#include "../includes/push_swap.h"

int		half_list(int len)
{
	int div;

	if ((len % 2 == 0) && len)
		div = len / 2;
	else
	{
		len = len - 1;
		div = len / 2;
	}
	return (div);
}

void	algos_smallest_first(int len, t_list *la)
{
	t_node	*node;
	int		smallest;
	int		half;
	int		smallest_pos;

	smallest = la->head->data;
	node = la->head;
	half = half_list(len);
	smallest_pos = 1;
	while (node != NULL)
	{
		if (node->data < smallest)
		{
			smallest = node->data;
			smallest_pos++;
		}
		node = node->next;
	}
	while (la->head->data != smallest)
	{
		if (la->head->data != smallest && la->tail->data == smallest)
			pr_rra(la);
		else if (la->head->data != smallest && la->head->next->data == smallest)
			pr_sa(la);
		else if (la->head->data != smallest && la->tail->prev->data == smallest)
		{
			pr_rra(la);
			pr_rra(la);
		}
		else
			if (smallest_pos > half)
				pr_rra(la);
			else if (smallest_pos <= half)
				pr_ra(la);
	}
}

void	is_max(t_list *lst)
{
	t_node	*max;

	max = lst->head;
	while (max->next != NULL)
	{
		if (max->data < max->next->data)
			max = max->next;
	}
}
