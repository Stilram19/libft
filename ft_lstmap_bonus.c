/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:06:24 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/14 17:56:57 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!(lst && f && del))
		return (0);
	new = malloc(sizeof(t_list));
	temp = new;
	while (lst)
	{
		temp->content = (*f)(lst->content);
		(*del)(lst->content);
		if (lst->next)
			temp->next = malloc(sizeof(t_list));
		else
			temp->next = 0;
		temp = temp->next;
		lst = lst->next;
	}
	return (new);
}
