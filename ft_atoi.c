/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:57:17 by enetxeba          #+#    #+#             */
/*   Updated: 2024/11/27 09:13:29 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_atoi(const char *nptr)
{
	int	c;
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	c = 0;
	while (nptr[c] == ' ' || (nptr[c] >= 9 && nptr[c] <= 13))
		c++;
	if (nptr[c] == '-')
	{
		sign = -sign;
		c++;
	}
	while (ft_isdigit(nptr[c]))
	{
		num = num * 10 + (nptr[c] - '0');
		c++;
	}
	return (num * sign);
}
