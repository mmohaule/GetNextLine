/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 10:07:28 by mmohaule          #+#    #+#             */
/*   Updated: 2017/08/18 14:20:59 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static int	cpy_words(const char *s, char **words, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len++;
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				if (!(*words = ft_strsub((const char*)&s[i + 1 - len], 0, len)))
					return (0);
				words++;
				len = 0;
			}
		}
		i++;
	}
	return (1);
}

static int	count_words(const char *s, char c)
{
	int i;
	int word;
	int counter;

	i = 0;
	word = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
				counter++;
		}
		i++;
	}
	return (counter);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		num_words;

	if (!s)
		return (NULL);
	num_words = count_words(s, c);
	if (!(words = (char**)malloc(sizeof(char*) * (num_words + 1))))
		return (NULL);
	if (!cpy_words(s, words, c))
		return (NULL);
	words[num_words] = NULL;
	return (words);
}
