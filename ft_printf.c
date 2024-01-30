/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:28:38 by rteoh             #+#    #+#             */
/*   Updated: 2024/01/09 12:09:18 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	as;
	int		print_length;

	print_length = 0;
	va_start(as, str);
	while (*str)
	{
		if (*str == '%')
			print_length += ft_formats(*(++str), as);
		else
			print_length += write(1, str, 1);
		++str;
	}
	va_end(as);
	return (print_length);
}
