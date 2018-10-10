/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 16:40:57 by mmohaule          #+#    #+#             */
/*   Updated: 2017/06/11 16:41:05 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		strlen;
	char	*strnew;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	strnew = NULL;
	strlen = ft_strlen(s1) + ft_strlen(s2);
	strnew = (char *)malloc(sizeof(char *) * (strlen + 1));
	if (strnew == NULL)
		return (NULL);
	ft_strcpy(strnew, s1);
	ft_strcat(strnew, s2);
	return (strnew);
}
