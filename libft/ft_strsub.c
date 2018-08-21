/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 14:49:56 by hrossouw          #+#    #+#             */
/*   Updated: 2018/06/01 15:04:29 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (0);
	substr = (char *)ft_memalloc(sizeof(char) * (len + 1));
	if (substr == 0)
		return (0);
	substr = (char *)ft_memcpy(substr, (s + start), len);
	return (substr);
}
