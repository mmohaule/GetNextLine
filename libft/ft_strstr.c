/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 14:59:18 by mmohaule          #+#    #+#             */
/*   Updated: 2017/06/11 09:46:43 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	int	i;
	int	j;
	int	n;
	int	ret;

	if (!ft_strlen(little))
		return ((char *)big);
	i = 0;
	while (*(big + i))
	{
		if (*(big + i) == *(little))
		{
			j = 0;
			n = i;
			ret = 1;
			while (*(little + j))
				if (*(little + (j++)) != *(big + (n++)))
					ret = 0;
			if (ret)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
