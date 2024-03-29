/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:16:46 by rteoh             #+#    #+#             */
/*   Updated: 2024/02/22 17:04:44 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//recursively calls the function and divdes by 10
//prints - sign first, then the next largest power of 10

int	ft_printnbr(long n)
{
	int	print_len;

	print_len = 0;
	if (n == INT_MIN)
	{
		print_len += ft_printstr("-2147483648");
		return (print_len);
	}
	if (n < 0)
	{
		print_len += ft_printchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_len += ft_printnbr(n / 10);
	}
	print_len += ft_printchar('0' + n % 10);
	return (print_len);
}
