/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:21:36 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/12 13:43:36 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!(*needle))
		return ((char *)haystack);
	while (i < len)
	{
		if (needle_len + i <= len)
		{
			if (!ft_strncmp(haystack + i, needle, needle_len))
				return ((char *)haystack + i);
		}
		else
			break ;
		i++;
	}
	return (0);
}
