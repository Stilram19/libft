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

// @brief applies the function f to all the characters of the string s
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_s;

	if (!(s && f))
		return (NULL);
	i = ft_strlen(s);
	new_s = malloc((i + 1) * sizeof(char));
	if (!new_s)
		return (0);
	*(new_s + i) = 0;
	while (i--)
		*(new_s + i) = (*f)(i, *(s + i));
	return (new_s);
}
