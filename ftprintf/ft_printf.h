/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:17:42 by tchaves           #+#    #+#             */
/*   Updated: 2023/10/30 14:56:42 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int	check_format(const char *arg, int i, va_list ap);
int	ft_putchar(char c);
int	ft_putunsnbr(unsigned int nb);
int	ft_puthex(unsigned long d, int arg);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_printf(const char *format, ...);

#endif
