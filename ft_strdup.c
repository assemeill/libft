/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:07:53 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/01 14:30:48 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if (!(dst = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	else
	{
		while (i >= 0)
		{
			dst[i] = src[i];
			i--;
		}
		return (dst);
	}
	return (0);
}
