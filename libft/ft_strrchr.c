/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 15:41:09 by mmohaule          #+#    #+#             */
/*   Updated: 2017/06/09 20:48:43 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			p = (char *)&s[i];
		i++;
	}
	if (p != NULL)
		return (p);
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
