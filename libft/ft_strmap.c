/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 13:18:19 by mmohaule          #+#    #+#             */
/*   Updated: 2017/08/24 14:31:05 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*temp;
	char	*ret;
	char	*str;
	size_t	len;

	if (s && f)
	{
		len = ft_strlen((char *)s);
		temp = (char *)malloc(sizeof(char) * (len + 1));
		if (temp == NULL)
			return (NULL);
		ret = temp;
		str = (char *)s;
		while (*str)
		{
			*temp = (*f)((char)*str);
			str++;
			temp++;
		}
		ret[len] = '\0';
		return (ret);
	}
	return (NULL);
}
