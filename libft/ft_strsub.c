/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 14:49:56 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/10 14:33:37 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	i = 0;
	if (s)
	{
		ret = ft_strnew(len);
		if (!ret)
			return (NULL);
		while (i < len)
		{
			ret[i] = s[i + start];
			i++;
		}
		return (ret);
	}
	return (NULL);
}
