/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 22:35:12 by mmohaule          #+#    #+#             */
/*   Updated: 2017/06/09 08:05:46 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void *mem;
	char *cmem;

	mem = malloc(size);
	cmem = (char *)mem;
	if (mem == NULL)
		return (NULL);
	while (size-- > 0)
		cmem[size] = 0;
	return (mem);
}
