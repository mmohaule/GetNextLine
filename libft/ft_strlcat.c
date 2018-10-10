/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 21:05:51 by mmohaule          #+#    #+#             */
/*   Updated: 2017/06/08 21:11:23 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	while (dst[i] && i < size)
		i++;
	len_dst = i;
	if ((size - i) == 0)
		return (i + len_src);
	while (src[i - len_dst] && i < size - 1)
	{
		dst[i] = src[i - len_dst];
		i++;
	}
	if (len_dst < size)
		dst[i] = '\0';
	return (len_dst + len_src);
}
