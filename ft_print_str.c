/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:16:13 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/20 12:54:14 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_str(char *str)
{
	size_t	len;

	len = 0;
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	if (ft_putstr_fd_rtnint(str, 1) < 0)
		return (-1);
	return (len);
}
