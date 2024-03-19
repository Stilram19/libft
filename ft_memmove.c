/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:36:19 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/19 12:28:18 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copies 'count' characters from dest to dest, but for overlapping memory blocks, 
// ft_memmove() is a safer approach than ft_memcpy().
void	*ft_memmove(void *dest, const void *src, size_t count)
{
	if (dest < src)
		ft_memcpy(dest, src, count);
	while (count-- && dest > src)
		*((char *)dest + count) = *((char *)src + count);
	return (dest);
}
