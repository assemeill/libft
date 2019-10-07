/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 15:42:22 by aszhilki          #+#    #+#             */
/*   Updated: 2019/10/07 11:28:26 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	if (!(tmp = (t_list *)malloc(sizeof(t_list) * content_size)))
		return (NULL);
	if (!content)
	{
		tmp->content = NULL;
		content_size = 0;
	}
	else
	{
		if (!(tmp->content = ft_memalloc(content_size)))
			return (NULL);
		ft_memcpy(tmp->content, content, content_size);
	}
	tmp->content_size = content_size;
	tmp->next = NULL;
	return (tmp);
}
