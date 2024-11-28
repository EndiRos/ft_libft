/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:19:15 by enetxeba          #+#    #+#             */
/*   Updated: 2024/11/28 14:41:25 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <stdio.h>

static void	num_len(int n, int *dig_num)
{
	if (n == 0)
	{
		(*dig_num)++;
		return;
	}
	while (n != 0)
	{
		n /= 10;
		(*dig_num)++;
	}
}

static void	is_neg(int *n, int *is_neg, int *dig_num)
{
	if (*n < 0)
	{
		*n = -(*n);
		*is_neg = 1;
		(*dig_num)++;
	}
}

char	*ft_itoa(int n)
{
	int		dig_num;
	int		x;
	char	*ret;
	int		is_neg;

	dig_num = 0;
	is_neg = 0;

	num_len(n, &dig_num);
	ret = malloc(sizeof(char) * (dig_num + 1));
	if (!ret)
		return (NULL);
	x = dig_num -1;
	if (is_neg)
		ret[0] = '-';
	while (n != 0)
	{
		ret[x--] = (n % 10) + '0';
		n /= 10;
	}
	ret[dig_num + 1] = '\0';
	return (ret);
}
