/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:06:31 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/10 10:32:10 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*temp1;

	temp = *lst;
	while (temp)
	{
		temp1 = temp->next;
		ft_lstdelone(temp, del);
		temp = temp1;
	}
	*lst = 0;
}
