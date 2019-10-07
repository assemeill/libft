/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 16:53:15 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/07 12:41:56 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				l;
	unsigned const char	*str1;
	unsigned const char *str2;

	l = 1;
	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while (l <= n)
	{
		if (*str1++ == *str2++)
		{
			if (l == n)
				return (0);
		}
		if (*str1 != *str2)
			return (*str1 - *str2);
		l++;
	}
	return (NULL);
}
