/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:21:13 by mmohaule          #+#    #+#             */
/*   Updated: 2017/08/18 15:25:49 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *ptr;

	ptr = *alst;
	while ((*alst))
	{
		ptr = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = ptr;
	}
	*alst = NULL;
}
