/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:47:00 by tchaves           #+#    #+#             */
/*   Updated: 2023/10/25 10:25:56 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function is used to create a substring and 
// traverse it based on the provided start position and length

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;
	size_t	sizelen;

	if (!s)
		return (NULL);
	sizelen = ft_strlen(s);
	if (start > sizelen)
		return (ft_strdup(""));
	else if (start + len > sizelen)
		len = sizelen - start;
	dest = ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
