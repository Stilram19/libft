/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:40:03 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/12 09:09:04 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

// @brief returns the address of the last occurrence of the character c in the s
// or NULL if no occurrence detected.
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
