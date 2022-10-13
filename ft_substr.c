/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:30:03 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/12 14:45:00 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	substr = malloc(len + 1);
	if (!(substr && s))
		return (0);
	while (i < len)
	{
		*(substr + i) = *(s + i + start);
		i++;
	}
	*(substr + i) = 0;
	return (substr);
}

int	main(void)
{
	printf("%s", ft_substr(0, 400, 20));
	return (0);
}
