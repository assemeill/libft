/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:06:20 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/01 14:32:34 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (n == '\0')
		return ((char *)(src + i));
	i--;
	while (i >= 0)
	{
		if (src[i] == n)
			return ((char *)(src + i));
		i--;
	}
	return (NULL);
}
