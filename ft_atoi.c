/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:41:37 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/10 11:40:17 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	ret;
	int	sign;

	i = 0;
	ret = 0;
	sign = 1;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign = -1;
		i++;
	}
	while (*(str + i) >= 48 && *(str + i) <= 57)
	{
		ret *= 10;
		ret += *(str + i) - 48;
		i++;
	}
	return (sign * ret);
}
