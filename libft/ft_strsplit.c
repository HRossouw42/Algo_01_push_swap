/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 17:40:53 by hrossouw          #+#    #+#             */
/*   Updated: 2018/09/10 14:27:47 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strclen(char const *s, char c)
{
	int		i;

	i = 1;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		w_len;
	int		w_count;
	int		i;
	char	**full;

	i = 0;
	if (!s)
		return (NULL);
	w_count = ft_amount_of_words(s, c);
	full = (char**)malloc(sizeof(char*) * (w_count + 1));
	if (!full)
		return (NULL);
	while (*s == c)
		s++;
	while (*s)
	{
		w_len = ft_strclen(s, c);
		full[i++] = ft_strsub(s, 0, w_len);
		s += w_len;
		while (*s && *s == c)
			s++;
	}
	full[i] = NULL;
	return (full);
}
