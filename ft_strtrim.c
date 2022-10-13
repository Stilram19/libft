/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:25:49 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/12 14:48:49 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_it_in_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (*(set + i))
	{
		if (*(set + i) == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_first_proper_char(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (*(s1 + i) && ft_is_it_in_set(set, *(s1 + i)))
		i++;
	return (i);
}

static size_t	ft_last_proper_char(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while ((i > 0) && ft_is_it_in_set(set, *(s1 + i)))
			i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*ret;

	if (!(s1 && set))
		return (0);
	i = 0;
	start = ft_first_proper_char(s1, set);
	end = ft_last_proper_char(s1, set);
	if (start <= end)
		ret = malloc(end - start + 2);
	else
		ret = malloc(1);
	if (!ret)
		return (0);
	while (i + start <= end)
	{
		*(ret + i) = *(s1 + start + i);
		i++;
	}
	*(ret + i) = 0;
	return (ret);
}
