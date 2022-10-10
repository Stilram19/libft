/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:21:36 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/10 13:24:24 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char *haystack, char *needle)
{
	int	j;

	j = 0;
	while (*(needle + j))
	{
		if ((*(needle + j) != *(haystack + j)))
			return (0);
		j++;
	}
	return (1);
}

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
		if (needle_len + i - 1 < len)
		{
			if (ft_check((char *)haystack + i, (char *)needle))
				return ((char *)haystack + i);
		}
		else
			break ;
		i++;
	}
	return (0);
}
