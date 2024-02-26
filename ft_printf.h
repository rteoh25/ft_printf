/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:08:12 by rteoh             #+#    #+#             */
/*   Updated: 2024/02/22 17:00:35 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int	ft_printf(const char *str, ...);
int	ft_formats(const char format, va_list as);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printnbr(long n);
int	ft_printptr(unsigned long long ptr);
int	ft_printunsigned(unsigned int n);
int	ft_printhex(unsigned int n, const char format);

#endif