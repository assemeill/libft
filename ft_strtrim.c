/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:07:55 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/02 16:41:28 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		z;
	int		n;
	int		i;
	char	*str;

	n = 0;
	i = 0;
	if (!s)
		return (NULL);
	z = ft_strlen(s) - 1;
	while (ft_isspace(s[z--]))
		n++;
	while (ft_isspace(*s))
		s++;
	if (n < ft_strlen(s))
		n = ft_strlen(s) - n;
	else
		return ("\0");
	if (n < 1)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	else
	{
		while (*s && n > i)
			str[i++] = *s++;
		str[i] = '\0';
	}
	return (str);
}
