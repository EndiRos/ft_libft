/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:14:15 by enetxeba          #+#    #+#             */
/*   Updated: 2024/11/28 11:13:58 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	ini;
	size_t	end;
	size_t	c;
	char	*ret;

	len = ft_strlen(s1);
	ini = 0;
	end = len;
	while (s1[ini] != '\0' && ft_strchr(set, s1[ini]))
		ini++;
	while (end > ini && ft_strchr(set, s1[end - 1]))
		end--;
	ret = malloc (end - ini + 1);
	if (ret == NULL)
		return (NULL);
	c = 0;
	while (c < (end - ini))
	{
		ret[c] = s1[ini + c];
		c++;
	}
	ret[c] = '\0';
	return (ret);
}
