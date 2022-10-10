/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 08:54:21 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/09 20:23:50 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*cat;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	cat = malloc(len + 1);
	if (!cat)
		return (0);
	while (*(s1 + i))
	{
		*(cat + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + i + j))
	{
		*(cat + i + j) = *(s1 + j);
		j++;
	}
	*(cat + i + j) = 0;
	return (cat);
}
