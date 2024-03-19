/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:36:50 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/06 18:39:20 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// @brief returns the low case ACSII encoding of the input alphabet
// if it is an upper case letter, otherwise it returns it.
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
