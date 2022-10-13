/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:58:33 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/12 14:22:35 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*copy;

	i = ft_strlen(s1);
	copy = malloc(i + 1);
	if (!copy)
		return (0);
	*(copy + i) = 0;
	while (i > 0)
	{
		i--;
		*(copy + i) = *(s1 + i);
	}
	return (copy);
}
