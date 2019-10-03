/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 19:49:08 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/01 14:28:33 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*c;
	const char		*s;
	size_t			i;

	c = dst;
	s = src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		if (s[i] == '\0')
			c[i] = '\0';
		else
			c[i] = s[i];
		i++;
	}
	return (dst);
}
