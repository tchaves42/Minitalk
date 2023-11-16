/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:25:39 by tchaves           #+#    #+#             */
/*   Updated: 2023/10/25 10:41:56 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function is used to fill a block of memory with a specific value. 
// It is useful for initializing variables, setting defaults in arrays, 
// and performing other memory initialization operations."

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char		*str;
	size_t		i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
