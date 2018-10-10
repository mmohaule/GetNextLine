/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 10:09:49 by mmohaule          #+#    #+#             */
/*   Updated: 2017/06/11 13:08:08 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*s_big;

	i = 0;
	j = 0;
	k = 0;
	s_big = (char *)big;
	while (little[k])
		k++;
	if (k == 0)
		return (s_big);
	while (big[i] && i < n)
	{
		while (little[j] == big[i + j])
		{
			if ((j == k - 1) && ((i + j) < n))
				return (s_big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
