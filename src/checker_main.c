/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:07:38 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/18 15:34:30 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int arc, char **arv)
{
	t_hold	*node;

	node = prep_memory();
	if (arc == 1)
		exit(1);
	if (prep_arg(arv, node, arc) == 0)
		return (0);
	if (create_stacks(node->raw, node, 0) == 0)
		return (0);
	get_input(node);
	exit(1);
}
