/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 08:49:27 by enetxeba          #+#    #+#             */
/*   Updated: 2024/11/27 13:22:20 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (c & 0xFF))
			return ((char *) s);
		s++;
	}
	if ((c & 0xFF) == '\0')
		return ((char *) s);
	return (0);
}
