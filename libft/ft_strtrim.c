/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 08:41:11 by mmohaule          #+#    #+#             */
/*   Updated: 2017/08/20 15:56:15 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	if (s)
	{
		i = 0;
		j = (int)ft_strlen((char *)s) - 1;
		while (ft_isspace(s[i]))
			i++;
		tmp = (char *)malloc(sizeof(char) * (j - i + 1));
		if (!tmp)
			return (NULL);
		while (ft_isspace(s[j]))
			j--;
		k = 0;
		while (i <= j)
		{
			tmp[k++] = s[i++];
		}
		tmp[k] = '\0';
		return (tmp);
	}
	return (NULL);
}
