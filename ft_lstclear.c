/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:06:31 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/18 13:44:18 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief applies the del strategy to each linked list node's content (data field), and frees
// the memory allocated for the node.
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;
	t_list	*next_temp;

	if (!(lst && del))
		return ;
	head = *lst;
	while (head)
	{
		next_temp = head->next;
		ft_lstdelone(head, del);
		head = next_temp;
	}
	*lst = NULL;
}
