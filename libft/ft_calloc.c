/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:12:26 by tchaves           #+#    #+#             */
/*   Updated: 2023/10/23 10:43:05 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*p;
	size_t	total_size;
	int		c;

	c = 0;
	total_size = nelem * elsize;
	p = malloc(total_size);
	if (p != NULL)
		ft_memset(p, c, total_size);
	return (p);
}
