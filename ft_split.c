/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 08:18:27 by enetxeba          #+#    #+#             */
/*   Updated: 2024/11/28 12:14:09 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

static int	search_n_parts(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			res++;
		i++;
	}
	return (res + 1);
}

static size_t	len_to_next(char const *s, char c, int *ini)
{
	int	i;

	i = *ini;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i - *ini);
}

static char	*word_extr(char const *s, char c, int *ini)
{
	size_t		i;
	char		*res;
	size_t		len;

	i = 0;
	len = len_to_next(s, c, ini);
	res = malloc (len + 1);
	if (res == NULL)
		return (NULL);
	while (i < len)
	{
		res[i] = s[*ini];
		i++;
		(*ini)++;
	}
	res[i] = '\0';
	return (res);
}

static void	destroi(char **res, int i)
{
	while (--i >= 0)
		free(res[i]);
	free (res);
}


char	**ft_split(char const *s, char c)
{
	char	**res;
	int		num_sub;
	int		i;
	int		ini;

	num_sub = search_n_parts (s, c);
	res = malloc (sizeof(char *) * (num_sub + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	ini = 0;
	while (i < num_sub && s[ini] != '\0')
	{
		while (s[ini] == c)
			ini++;
		res[i] = word_extr (s, c, &ini);
		if (res[i] == NULL)
		{
			destroi(res, i);
			return (NULL);
		}
		i++;
	}
	res[i] = NULL;
	return (res);
}
