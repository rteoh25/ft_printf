/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:16:16 by rteoh             #+#    #+#             */
/*   Updated: 2024/02/22 17:18:06 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//long being a datatype of 4 bytes, long long 8 bytes
//unsigned cause it cant be negative
//same as the printing hex function divide by 16 and from
//"0123456789abcdef"

int	ft_putptr(unsigned long long num)
{
	int	print_len;
	int	digit;

	print_len = 0;
	if (num >= 16)
		print_len += ft_putptr(num / 16);
	digit = num % 16;
	if (digit <= 9)
		print_len += ft_printchar(digit + '0');
	else
		print_len += ft_printchar(digit - 10 + 'a');
	return (print_len);
}

//just to count ptrlen for the output integer

int	ft_ptrlen(unsigned long long ptr)
{
	unsigned long long	num;
	int					num_len;

	num = (unsigned long long)ptr;
	num_len = 1;
	while (num >= 16)
	{
		num /= 16;
		num_len++;
	}
	return (num_len);
}

//printing the ptr

int	ft_printptr(unsigned long long ptr)
{
	int		print_len;

	print_len = 0;
	print_len += write(1, "0x", 2);
	if (ptr == 0)
		print_len += write(1, "0", 1);
	else
	{
		ft_putptr(ptr);
		print_len += ft_ptrlen(ptr);
	}
	return (print_len);
}
