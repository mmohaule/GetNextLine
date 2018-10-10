/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 02:26:27 by mmohaule          #+#    #+#             */
/*   Updated: 2017/08/24 10:56:47 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	s_c;
	unsigned char	*s_dst;
	unsigned char	*s_src;

	s_dst = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	s_c = (unsigned char)c;
	i = 0;
	while (n > i)
	{
		s_dst[i] = s_src[i];
		if (s_dst[i] == s_c)
			return (&dst[i + 1]);
		else
			i++;
	}
	return (NULL);
}
