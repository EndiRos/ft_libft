/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:53:08 by enetxeba          #+#    #+#             */
/*   Updated: 2024/11/27 13:22:29 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;
	size_t	c;

	len = ft_strlen(s);
	ptr = malloc(len + 1);
	c = 0;
	if (ptr == NULL)
		return (NULL);
	while (c < len)
	{
		*(ptr + c) = *(s + c);
		c++;
	}
	*(ptr + len) = '\0';
	return (ptr);
}
