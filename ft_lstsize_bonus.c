/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 08:06:04 by endika            #+#    #+#             */
/*   Updated: 2024/12/01 12:48:30 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int		cnt;

	while (lst)
	{
		lst = lst->next;
		cnt++;
	}
	return (cnt);
}
