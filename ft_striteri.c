/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:45:33 by enetxeba          #+#    #+#             */
/*   Updated: 2024/11/28 15:57:56 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_striteri(char const *s, void (*f)(unsigned int, char*)
{
	size_t	len;
	char	*ret;
	size_t	x;

	len = ft_strlen(s);
	x = 0;
	while (x < len)
	{
		f(x , &s[x]);
		x++;
	}
	return (ret);
}
