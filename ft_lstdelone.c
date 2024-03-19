/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:49:28 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/14 16:18:20 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief applies the del starategy to the given node's content (data field)
// and then frees the node's allocated memory
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!(lst && del))
		return ;
	(*del)(lst->content);
	free(lst);
}
