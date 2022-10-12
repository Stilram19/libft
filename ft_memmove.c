/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:36:19 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/12 12:27:14 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	if (!(dest || src))
		return (0);
	if (dest < src)
	{
		ft_memcpy(dest, src, count);
		return (dest);
	}
	while (count > 0)
	{
		count--;
		*((char *)dest + count) = *((char *)src + count);
	}
	return (dest);
}
