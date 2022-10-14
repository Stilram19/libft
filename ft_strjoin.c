/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 08:54:21 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/14 11:28:25 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*join;

	i = 0;
	j = 0;
	if (!(s1 && s2))
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	join = malloc(len + 1);
	if (!join)
		return (0);
	while (*(s1 + i))
	{
		*(join + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j))
	{
		*(join + i + j) = *(s2 + j);
		j++;
	}
	*(join + i + j) = 0;
	return (join);
}
