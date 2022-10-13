/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:35:54 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/12 14:51:28 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_s;

	i = ft_strlen(s);
	new_s = malloc(i + 1);
	if (!(new_s && s))
		return (0);
	*(new_s + i) = 0;
	while (i > 0)
	{
		i--;
		*(new_s + i) = (*f)(i, *(s + i));
	}
	return (new_s);
}
