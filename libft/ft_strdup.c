/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 12:52:24 by mmohaule          #+#    #+#             */
/*   Updated: 2017/06/07 21:51:32 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!p)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = (char)s1[i];
		i++;
	}
	if (!p)
		return (0);
	p[i] = '\0';
	return (p);
}
