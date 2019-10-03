/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 17:31:50 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/02 19:58:00 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_if_negative(int n)
{
	if (n < 0)
		return (0);
	else
		return (1);
}

int		ft_int_size(int n)
{
	int i;

	if (!(ft_if_negative(n)))
		i = 1;
	else
		i = 0;
	while (n/10 != 0)
	{
		n/=10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	if (n == '0')
		return ("0");
	i = ft_int_size(n);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	if (!(ft_if_negative(n)))
	{
		str[j] = '-';
		printf("%d\n", n);
        n = -1 * n;
        printf("%d\n", n);
		j = 1;
	}
	while (n%10 != 10 && i >= j)
	{
		str[i--] = n%10 + '0';
		n -= n%10;
		n /= 10;
	}
	return (str);
}

int		main(void)
{
	//int n = -2147483647 -1;
	printf("%s\n", ft_itoa(-2147483647 -1));
	char *i1 = "-2147483647 -1";	
	printf("%d\n", atoi(i1));
}
