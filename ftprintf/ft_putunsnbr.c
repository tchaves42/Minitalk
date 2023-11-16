/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:21:55 by tchaves           #+#    #+#             */
/*   Updated: 2023/10/30 15:29:31 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsnbr(unsigned int num)
{
	static unsigned int		count;
	unsigned int			sign;

	sign = 0;
	count = 0;
	if (num >= 10)
		ft_putunsnbr(num / 10);
	count += ft_putchar((num % 10) + 48);
	return (count + sign);
}
