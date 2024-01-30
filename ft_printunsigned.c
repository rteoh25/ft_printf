/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:13:43 by rteoh             #+#    #+#             */
/*   Updated: 2024/01/09 12:09:39 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int n)
{
	int	print_len;

	print_len = 0;
	if (n >= 10)
		print_len += ft_printunsigned(n / 10);
	print_len += ft_printchar('0' + n % 10);
	return (print_len);
}
