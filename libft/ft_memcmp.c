/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:31:01 by tchaves           #+#    #+#             */
/*   Updated: 2023/10/13 16:43:32 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*dst;

	str = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	while (n > 0)
	{
		if (*str != *dst)
			return (*str - *dst);
		n--;
		str++;
		dst++;
	}
	return (0);
}
