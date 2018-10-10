/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 14:19:42 by mmohaule          #+#    #+#             */
/*   Updated: 2017/08/18 15:31:55 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *item;

	if (!(item = malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		if (!(item->content = malloc(sizeof(content_size))))
			return (NULL);
		ft_memcpy(item->content, content, content_size);
		item->content_size = content_size;
		item->next = NULL;
	}
	else
	{
		item->content = NULL;
		item->content_size = 0;
	}
	return (item);
}
