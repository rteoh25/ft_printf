/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:11:25 by rteoh             #+#    #+#             */
/*   Updated: 2024/02/22 17:00:16 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//this simply sees what is after the % sign and
//assigns it to another function

int	ft_formats(const char format, va_list as)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_printchar(va_arg(as, int));
	else if (format == 's')
		print_len += ft_printstr(va_arg(as, char *));
	else if (format == 'p')
		print_len += ft_printptr(va_arg(as, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_len += ft_printnbr(va_arg(as, int));
	else if (format == 'u')
		print_len += ft_printunsigned(va_arg(as, unsigned int));
	else if (format == 'x' || format == 'X')
		print_len += ft_printhex(va_arg(as, unsigned int), format);
	else
		print_len += ft_printchar(format);
	return (print_len);
}
