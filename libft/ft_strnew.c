/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 16:33:24 by mmohaule          #+#    #+#             */
/*   Updated: 2017/06/09 20:49:19 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnew(size_t size)
{
	char *string;

	string = (char *)ft_memalloc(size + 1);
	if (string != NULL)
	{
		ft_memset(string, 0, size + 1);
	}
	return ((char *)string);
}
