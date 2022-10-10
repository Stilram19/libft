/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:36:19 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/07 12:59:07 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	int	i;

	i = count - 1;
	if (dest < src)
	{
		ft_memcpy(dest, src, count);
		return (dest);
	}
	while (i >= 0)
	{
		*((char *)dest + i) = *((char *)src + i);
		i--;
	}
	return (dest);
}
