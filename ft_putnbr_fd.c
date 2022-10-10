/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:47:19 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/09 17:23:37 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar(45);
		if (n == -2147483648)
			ft_putstr_fd("2147483648", fd);
		ft_putnbr_fd(-n, fd);
		return ;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar(n + 48, fd);
}
