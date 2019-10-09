/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 19:32:33 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/08 21:40:33 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_copystr(char *dest, char *src, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_strsplit(char const *s, char c)
{
	int		n;
	int		w;
	char	**str;

	if (!s || !c
	|| !(str = (char **)malloc(sizeof(char *) * (ft_words_count(s, c) + 1))))
		return (NULL);
	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			w = 0;
			while (*(s + w) != c && *(s + w) != '\0')
				w++;
			if (!(str[n] = (char *)malloc(sizeof(char) * (w + 1))))
				return (NULL);
			str[n] = ft_copystr(str[n], (char *)s, w);
			s += w;
			++n;
		}
	}
	str[n] = NULL;
	return (str);
}
