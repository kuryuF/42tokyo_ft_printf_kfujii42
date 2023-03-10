/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:18:45 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/20 12:09:35 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_digit_u(unsigned int n)
{
	int	digit;

	digit = 0;
	if (n <= 0)
		digit++;
	while (n)
	{
		digit++;
		n = n / 10;
	}
	return (digit);
}


char	*ft_utoa(unsigned int n)
{
	char			*str;
	int				digit;
	unsigned int	num;

	digit = ft_get_digit_u(n);
	num = n;
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (!str)
		return (NULL);
	if (num == 0)
		str[0] = '0';
	str[digit] = '\0';
	digit--;
	while (num)
	{
		str[digit] = num % 10 + '0';
		digit--;
		num = num / 10;
	}
	return (str);
}
