/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cress <cress@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:26:50 by amonteag          #+#    #+#             */
/*   Updated: 2025/05/03 20:34:58 by cress            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int     ft_printf(char const *, ...);
int	ft_putnbr_hex_fd(unsigned int n, int fd);
int	ft_putnbr_HEX_fd(unsigned int n, int fd);
int	ft_putunsig_fd(unsigned int n, int fd);
int	ft_putptr_fd(void *ptr, int fd);
int	ft_putptr_hex_fd(unsigned long n, int fd);

#endif