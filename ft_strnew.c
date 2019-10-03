/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:19:34 by aszhilki          #+#    #+#             */
/*   Updated: 2019/09/30 17:35:46 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	size += 1;
	if (!(str = (char *)malloc(sizeof(char) * (size))))
		return (NULL);
	else
		ft_bzero(str, size);
	return (str);
}
