/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 17:31:50 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/08 15:26:04 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = ft_int_size(n);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i++;
	str[i--] = '\0';
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
		j = 2;
	}
	if (ft_if_negative(n))
	{
		str[j] = '-';
		n = -1 * n;
		j = 1;
	}
	str = (ft_base(str, n, i, j));
	return (str);
}
