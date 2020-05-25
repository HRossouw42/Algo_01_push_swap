/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:04:43 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/18 15:28:05 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int arc, char **arv)
{
	t_hold	*node;
	char	*cmd;

	node = prep_memory();
	cmd = (char*)ft_memalloc(sizeof(char) * 4);

	if (prep_arg(arv, node, arc) == 0)
		return (0);
	if (create_stacks(node->raw, node, 0) == 0)
		return (0);
	node->size = list_size(node->a);
	get_max_values(node, node->size);
	sort(node, cmd);

	return (1);
}
