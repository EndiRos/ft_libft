/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:01:33 by enetxeba          #+#    #+#             */
/*   Updated: 2024/11/27 13:20:48 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*ptr_acces;
	char	val;

	ptr_acces = (char *) ptr;
	val = value & 0xFF;
	while (num-- > 0)
		*ptr_acces++ = val;
	return (ptr);
}
