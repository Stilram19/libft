/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:43:55 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/12 08:24:23 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief appends the NUL-terminated string src to the end of dest. 
// It will append at most dstsize - strlen(dst) - 1 bytes, NUL-terminating the result
// @param dstsize is the whole buffer size, not the length of dest
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!dstsize)
		return (dstsize + ft_strlen(src));
	j = 0;
	i = ft_strlen(dest);
	if (dstsize <= i)
		return (dstsize + ft_strlen(src));
	while (j < dstsize - i - 1 && *(src + j))
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = 0;
	return (i + ft_strlen(src));
}
