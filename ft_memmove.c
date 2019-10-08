/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:01:25 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/08 15:14:52 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	int				n;

	n = -1;
	if (!dst && !src)
		return (NULL);
	if (!ft_strcmp(dst, "") && !ft_strcmp(src, ""))
		return ((void *)dst);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (src < dst)
	{
		while ((int)--len >= 0)
		{
			*(d + len) = *(s + len);
		}
	}
	else
		while ((int)len > ++n)
			d[n] = s[n];
	return (d);
}
