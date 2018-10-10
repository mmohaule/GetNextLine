/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 03:55:03 by mmohaule          #+#    #+#             */
/*   Updated: 2017/06/09 20:41:36 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	char	*save;

	i = 0;
	save = dst;
	while (i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while ((len - i) > 0)
	{
		dst[i] = '\0';
		i++;
	}
	return (save);
}
