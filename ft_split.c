/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:07:47 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/12 14:49:34 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_arrlen(char const *s, char c)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (*(s + i))
	{
		while (*(s + i) && *(s + i) == c)
			i++;
		if (*(s + i))
			size++;
		while (*(s + i) && *(s + i) != c)
			i++;
	}
	return (size);
}

static char	*ft_assign(const char *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	str = malloc(i + 1);
	*(str + i) = 0;
	while (i > 0)
	{
		i--;
		*(str + i) = *(s + i);
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	buff;
	char	**arr;

	i = 0;
	j = 0;
	buff = ft_arrlen(s, c) + 1;
	arr = malloc(buff * 8);
	if (!(arr && s))
		return (0);
	while (*(s + i))
	{
		while (*(s + i) && *(s + i) == c)
			i++;
		if (*(s + i))
		{
			*(arr + j) = ft_assign(s + i, c);
			j++;
		}
		while (*(s + i) && *(s + i) != c)
			i++;
	}
	*(arr + j) = 0;
	return (arr);
}
