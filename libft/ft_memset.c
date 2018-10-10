/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 15:46:27 by mmohaule          #+#    #+#             */
/*   Updated: 2017/08/24 10:32:22 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)b;
	while (i < len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
