/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cress <cress@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:11:42 by amonteag          #+#    #+#             */
/*   Updated: 2025/05/03 23:58:11 by cress            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include <stdarg.h>
#include "libftprintf.h"

int	ft_fmt(va_list arg_ptr, char const * fmt, int fd)
{
	int	chars_count;

	chars_count = 0;
	if (*fmt == 'c')
		chars_count += ft_putchar_fd(va_arg(arg_ptr, int), fd);
	if (*fmt == 's')
		chars_count += ft_putstr_fd(va_arg(arg_ptr, char *), fd);
	if (*fmt == 'd')
		chars_count += ft_putnbr_fd(va_arg(arg_ptr, int), fd);
	if (*fmt == 'i')
		chars_count += ft_putnbr_fd(va_arg(arg_ptr, int), fd);
	if (*fmt == 'p')
		chars_count += ft_putptr_fd(va_arg(arg_ptr, void *), fd);
	if (*fmt == 'u')
		chars_count += ft_putunsig_fd(va_arg(arg_ptr, int), fd);
	if (*fmt == 'x')
		chars_count += ft_putnbr_hex_fd(va_arg(arg_ptr, int), fd);
	if (*fmt == 'X')
		chars_count += ft_putnbr_HEX_fd(va_arg(arg_ptr, int), fd);
	if (*fmt == '%')
		chars_count += ft_putchar_fd('%', fd);
	return (chars_count);
}
int	ft_printf(char const * fmt, ...)
{
	va_list		arg_ptr;
	int			i;
	int			chars_count;

	i = 0;
	chars_count = 0;
	va_start(arg_ptr, fmt);
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			i++;
			chars_count += ft_fmt(arg_ptr, &fmt[i], 1);
		}
		else
		{
			ft_putchar_fd(fmt[i], 1);
			chars_count++;
		}
		i++;
	}
	va_end(arg_ptr);
	return (chars_count);
}
