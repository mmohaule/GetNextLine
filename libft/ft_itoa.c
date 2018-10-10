/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 14:47:13 by mmohaule          #+#    #+#             */
/*   Updated: 2017/08/18 15:43:23 by mmohaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_digits(unsigned int num)
{
	int digits;

	digits = 1;
	while (num /= 10)
		digits++;
	return (digits);
}

char		*ft_itoa(int nbr)
{
	int				digits;
	unsigned int	num;
	char			*str;

	if (nbr < 0)
	{
		num = (unsigned int)(-1 * nbr);
		digits = count_digits(num) + 1;
	}
	else
	{
		num = (unsigned int)nbr;
		digits = count_digits(num);
	}
	if (!(str = (char*)malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	str[digits--] = '\0';
	str[digits--] = (num % 10) + '0';
	while (num /= 10)
		str[digits--] = (num % 10) + '0';
	if (nbr < 0)
		str[digits] = '-';
	return (str);
}
