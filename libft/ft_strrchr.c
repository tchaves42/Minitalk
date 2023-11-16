/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:49:25 by tchaves           #+#    #+#             */
/*   Updated: 2023/10/17 18:03:15 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this function searches for the last occurrence of the character c 
//(an unsigned char) in the string pointed to, by the argument str.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	j = -1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j == -1)
	{
		if (c == '\0')
			return ((char *)&s[i]);
		return (NULL);
	}
	return ((char *)&s[j]);
}
