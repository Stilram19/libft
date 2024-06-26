/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:32:38 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/14 16:51:54 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief applies the f method to each node's content (data field)
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
