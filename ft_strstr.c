/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 22:01:37 by aszhilki          #+#    #+#             */
/*   Updated: 2019/09/30 14:03:08 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int n;
	int l;

	i = 0;
	l = 0;
	if (to_find[l] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		n = i;
		l = 0;
		while (str[n] == to_find[l] && str[n] != '\0')
		{
			l++;
			n++;
		}
		if (to_find[l] == '\0')
		{
			return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}
