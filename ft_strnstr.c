/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:55:34 by aszhilki          #+#    #+#             */
/*   Updated: 2019/09/24 13:21:37 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t			i;
	int				n;

	i = 0;
	n = 0;
	if (*needle == '\0')
		return (haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == *needle)
		{
			while (haystack[i] == *needle && i < len)
			{
				i++;
				n++;
				needle++;
				if (*needle == '\0')
					return (&haystack[i] - n);
			}
		}
		else
			i++;
	}
	return (NULL);
}
