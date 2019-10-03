/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:39:16 by aszhilki          #+#    #+#             */
/*   Updated: 2019/09/30 10:44:45 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	l;
	size_t	i;
	size_t	res;

	l = 0;
	i = 0;
	res = 0;
	while (dest[l])
		l++;
	while (src[res])
		res++;
	if (n <= l)
		res += n;
	else
		res += l;
	while (l + 1 < n && src[i])
		dest[l++] = src[i++];
	dest[l] = '\0';
	return (res);
}
