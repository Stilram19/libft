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

// @brief joins the two strings into a new place in memory
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	if (!(s1 && s2))
		return (0);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	join = malloc((i + j + 1) * sizeof(char));
	if (!join)
		return (0);
	ft_strlcpy(join, s1, i + 1);
	ft_strlcpy(join + i, s2, j + 1);
	return (join);
}
