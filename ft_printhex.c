/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:13:08 by rteoh             #+#    #+#             */
/*   Updated: 2024/02/22 16:54:46 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//hex being hexadecimal which is "0123456789abcdef"
//basically take the number and divide by 16
//if its  <=9 then print the number
//if its > 9 make it an alphabet

int	ft_printhex(unsigned int n, const char format)
{
	int	print_len;
	int	digit;

	print_len = 0;
	if (n >= 16)
		print_len += ft_printhex(n / 16, format);
	digit = n % 16;
	if (digit < 10)
		print_len += ft_printchar(digit + '0');
	else
	{
		if (format == 'x')
			print_len += ft_printchar(digit - 10 + 'a');
		else if (format == 'X')
			print_len += ft_printchar(digit - 10 + 'A');
	}
	return (print_len);
}
