/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 19:32:33 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/02 16:42:02 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		n;
	int		w;
	int		l;
	char	**str;

	i = 0;
	if (!s || !c)
		return (NULL);
	n = ft_words_count(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * n)))
		return (NULL);
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			w = 0;
			l = 0;
			while (s[i + w] != c && s[i + w] != '\0')
				w++;
			if (!(str[n] = (char *)malloc(sizeof(char) * (w + 1))))
				return (NULL);
			while (s[i] != c && s[i] != '\0')
				str[n][l++] = s[i++];
			str[n][l] = '\0';
			n++;
		}
	}
	return (str);
}
