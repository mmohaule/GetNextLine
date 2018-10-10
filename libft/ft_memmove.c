/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 21:00:21 by mmohaule          #+#    #+#             */
/*   Updated: 2017/06/08 21:03:08 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s_dst;
	const char	*s_src;

	s_dst = (char *)dst;
	s_src = (char *)src;
	if (s_src < s_dst)
	{
		while (len--)
		{
			s_dst[len] = s_src[len];
		}
	}
	else
		ft_memcpy(s_dst, s_src, len);
	return (s_dst);
}
