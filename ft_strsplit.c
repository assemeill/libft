/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 19:32:33 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/08 22:07:20 by aszhilki         ###   ########.fr       */
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

char			**ft_strsplit(char const *s, char c)
{
	int		n[2];
	char	**str;

	if (!s || !c
	|| !(str = (char **)malloc(sizeof(char *) * (ft_words_count(s, c) + 1))))
		return (NULL);
	n[0] = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			n[1] = 0;
			while (*(s + n[1]) != c && *(s + n[1]) != '\0')
				n[1]++;
			if (!(str[n[0]] = (char *)malloc(sizeof(char) * (n[1] + 1))))
				return (NULL);
			str[n[0]] = ft_copystr(str[n[0]], (char *)s, n[1]);
			s += n[1];
			++n[0];
		}
	}
	str[n[0]] = NULL;
	return (str);
}
