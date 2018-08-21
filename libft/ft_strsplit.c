/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 17:40:53 by hrossouw          #+#    #+#             */
/*   Updated: 2018/06/04 17:55:22 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_splitstr(char **arr, const char *s, char a, size_t len)
{
	size_t	count;
	size_t	len_word;
	size_t	i;

	count = 0;
	i = 0;
	while (count < len)
	{
		len_word = 0;
		while (s[i] == a && s[i])
			i++;
		while (s[i] != a && s[i])
		{
			len_word++;
			i++;
		}
		if ((arr[count] = ft_strsub(&s[i - len_word], 0, len_word)) == NULL)
			return (0);
		count++;
	}
	arr[count] = 0;
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		len;

	if (!s)
		return (NULL);
	len = ft_amount_of_words(s, c);
	arr = ((char **)ft_memalloc(sizeof(char*) * len + 1));
	if (!arr)
		return (NULL);
	if (ft_splitstr(arr, s, c, len))
		return (arr);
	else
		ft_memdel((void **)arr);
	return (arr);
}
