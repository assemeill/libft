/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:47:41 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/07 15:31:52 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *c)
{
	int		if_negative;
	long	number;
	long	check;

	number = 0;
	if_negative = 1;
	while ((*c == 32) || (*c >= 9 && *c <= 13))
		c++;
	if (*c == '-' || *c == '+')
	{
		if (*c == '-')
			if_negative = -1;
		c++;
	}
	while (*c >= '0' & *c <= '9')
	{
		check = number;
		number = number * 10 + *c++ - '0';
		if (check > number && if_negative == 1)
			return (-1);
		else if (check > number && if_negative != 1)
			return (0);
	}
	return (if_negative * number);
}
