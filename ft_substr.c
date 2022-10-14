/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:30:03 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/14 12:57:08 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	i = 0;
	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (s_len <= start)
		len = 0;
	else if (len + start > s_len)
		len = s_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (0);
	while (i < len && *(s + i + start))
	{
		*(substr + i) = *(s + i + start);
		i++;
	}
	*(substr + i) = 0;
	return (substr);
}
