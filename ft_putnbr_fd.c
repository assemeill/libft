/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:04:46 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/03 12:40:58 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (!n)
		return ;
	if (ft_if_negative(n))
	{
		write(fd, "-", 1);
		ft_putnbr_fd((n*(-1)), fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd((n/10), fd);
		ft_putchar_fd((n%10 + '0'), fd);
	}
	else
		ft_putchar_fd((n +'0'), fd);
	return ;
}
