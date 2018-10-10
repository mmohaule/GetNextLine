/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 09:23:35 by mmohaule          #+#    #+#             */
/*   Updated: 2017/06/09 20:32:27 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (c1[i] == c2[i])
			i++;
		else
			return ((int)c1[i] - (int)c2[i]);
	}
	return (0);
}
