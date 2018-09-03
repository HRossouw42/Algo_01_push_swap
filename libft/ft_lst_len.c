/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:50:43 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/03 17:08:28 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_lst_len(t_list *begin_list)
{
	if (begin_list == NULL)
		return (0);
	return (ft_lst_len(begin_list->next) + 1);
}