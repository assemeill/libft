/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:56:10 by aszhilki          #+#    #+#             */
/*   Updated: 2019/09/27 12:51:30 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			chr;
	unsigned const char		*src;

	chr = c;
	src = s;
	while (n-- > 0)
	{
		if (*src == chr)
			return ((void *)src);
		else
			src++;
	}
	return (NULL);
}
