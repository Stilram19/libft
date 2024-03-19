/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:20:00 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/11 16:12:53 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @param s pointer to the memory block to be cleared
// @param n number of bytes to be cleared, starting from the address s.
// @brief clears n bytes, starting from the address s
void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(char *)s++ = 0;
}
