/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 08:27:17 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/14 14:11:10 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief inserts a new element at the front of the linked list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(new && lst))
		return ;
	new->next = *lst;
	*lst = new;
}
