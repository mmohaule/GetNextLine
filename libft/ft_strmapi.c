/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 15:02:46 by mmohaule          #+#    #+#             */
/*   Updated: 2017/08/24 14:37:46 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*temp;
	char			*ret;
	char			*str;
	size_t			len;

	i = 0;
	if (s && f)
	{
		len = ft_strlen((char *)s);
		temp = (char *)malloc((len + 1) * sizeof(char));
		if (temp == NULL)
			return (NULL);
		ret = temp;
		str = (char *)s;
		while (str[i] != '\0')
		{
			temp[i] = (*f)((unsigned int)i, (char)str[i]);
			i++;
		}
		ret[len] = '\0';
		return (ret);
	}
	return (NULL);
}
