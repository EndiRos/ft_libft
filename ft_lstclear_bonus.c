/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:27:23 by endika            #+#    #+#             */
/*   Updated: 2024/12/01 12:41:42 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur_nod_ptr;

	while ((*lst))
	{
		cur_nod_ptr = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = cur_nod_ptr;
	}
}
