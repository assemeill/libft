/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:09:51 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/01 14:32:17 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*b;
	unsigned int	i;

	i = -1;
	if (s && *s && f && *f)
	{
		if (!(b = ft_strnew(ft_strlen(s))))
			return (NULL);
		while (s[++i])
			b[i] = f(i, s[i]);
		return (b);
	}
	return (NULL);
}
