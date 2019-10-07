/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:33:52 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/07 13:09:30 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			if (*s1 == '\0')
				return (0);
		}
		else if (*s1 != *s2)
			return ((unsigned char)(*s1) - (unsigned char)(*s2));
	}
	return (0);
}
