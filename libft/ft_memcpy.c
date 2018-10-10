/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 13:24:04 by mmohaule          #+#    #+#             */
/*   Updated: 2017/06/09 20:34:50 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s_dst;
	char	*s_src;

	s_dst = dst;
	s_src = (char *)src;
	i = 0;
	while (i < n)
	{
		s_dst[i] = s_src[i];
		i++;
	}
	return (dst);
}
