/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cress <cress@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:04:13 by cress             #+#    #+#             */
/*   Updated: 2025/05/03 20:57:16 by cress            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include <stdarg.h>
#include "libftprintf.h"

int	ft_putnbr_hex_fd(unsigned int n, int fd)
{
	char	*alf_hex;
	int		chars_count;

	chars_count = 0;
	alf_hex = "0123456789abcdef";
	if (n >= 16)
		chars_count += ft_putnbr_hex_fd(n / 16, fd);
	chars_count += ft_putchar_fd(alf_hex[n % 16], 1);
	return (chars_count);
}

int	ft_putptr_hex_fd(unsigned long n, int fd)
{
	char	*alf_hex;
	int		chars_count;

	chars_count = 0;
	alf_hex = "0123456789abcdef";
	if (n >= 16)
		chars_count += ft_putptr_hex_fd(n / 16, fd);
	chars_count += ft_putchar_fd(alf_hex[n % 16], 1);
	return (chars_count);
}

int	ft_putnbr_HEX_fd(unsigned int n, int fd)
{
	char	*alf_hex;
	int		chars_count;

	chars_count = 0;
	alf_hex = "0123456789ABCDEF";
	if (n >= 16)
		ft_putnbr_HEX_fd(n / 16, fd);
	ft_putchar_fd(alf_hex[n % 16], 1);
	return (chars_count);
}

int	ft_putunsig_fd(unsigned int n, int fd)
{
	char	digit;
	int		chars_count;

	chars_count = 0;
	if (n >= 10)
		chars_count += ft_putunsig_fd(n / 10, fd);
	digit = (n % 10) + '0';
	chars_count += write(fd, &digit, 1);
	return (chars_count);
}

int	ft_putptr_fd(void *ptr, int fd)
{
	char			*alf_hex;
	unsigned long	n;
	int		chars_count;

	chars_count = 0;
	n = (unsigned long)ptr;
	alf_hex = "0123456789abcdef";
	chars_count += write(fd, "0x", 2);
	if (n == 0)
		return (chars_count += write(fd, "0", 1));
	if (n >= 16)
		chars_count += ft_putptr_hex_fd(n / 16, fd);
	chars_count += ft_putchar_fd(alf_hex[n % 16], 1);
	return (chars_count);
}
