/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:03:18 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/01 14:32:11 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*b;
	int		i;

	i = -1;
	if (s && *s && f && *f)
	{
		if (!(b = ft_strnew(ft_strlen(s))))
			return (NULL);
		while (s[++i])
			b[i] = f(s[i]);
		return (b);
	}
	return (NULL);
}
