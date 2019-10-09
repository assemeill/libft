/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:23:57 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/08 19:58:40 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 1;
	while (i <= n)
	{
		if (*src == '\0')
			*dest++ = '\0';
		else
			*dest++ = *src++;
		i++;
	}
	return (dest - i + 1);
}
