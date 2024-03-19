/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:33:24 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/12 13:47:54 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// @brief returns the upper case ACSII encoding of the input alphabet
// if it is a lower case letter, otherwise it returns it.
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
