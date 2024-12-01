/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 07:23:18 by endika            #+#    #+#             */
/*   Updated: 2024/12/01 12:47:57 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*list_memb;

	list_memb = malloc (sizeof(t_list));
	if (list_memb == NULL)
		return (NULL);
	list_memb->content = content;
	list_memb->next = NULL;
	return (list_memb);
}
