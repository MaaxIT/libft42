/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:01:45 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/11/08 20:31:41 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_split_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	ft_split_increase(size_t *i, size_t *len)
{
	(*i)++;
	(*len)++;
}

static void	ft_split_freearray(char **array)
{
	size_t	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static int	ft_split_insert(char **arr, size_t *key, char *str, size_t len)
{
	char	*substr;

	substr = ft_substr(str, 0, len);
	if (!substr)
	{
		ft_split_freearray(arr);
		return (0);
	}
	arr[(*key)++] = substr;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	length;
	size_t	key;
	size_t	i;
	char	**array;
	char	*str;

	array = (char **)malloc((ft_split_count(s, c) + 1) * sizeof(char *));
	if (!array)
		return ((char **)0);
	key = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		str = ((char *)&s[i]);
		length = 0;
		while (s[i] && s[i] != c)
			ft_split_increase(&i, &length);
		if (s[i - 1] != c && ft_split_insert(array, &key, str, length) == 0)
			return ((char **)0);
	}
	array[key] = 0;
	return (array);
}
