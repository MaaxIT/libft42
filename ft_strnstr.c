/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:27:06 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/11/06 15:29:31 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_fit(char const *big_start, char const *little)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen((char *)little);
	while (big_start[i] && little[i] && i < little_len)
	{
		if (big_start[i] == little[i])
		{
			if (i + 1 == little_len)
				return (1);
		}
		else
			return (0);
		i++;
	}
	return (0);
}

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen((char *)little);
	if (little_len == 0 || !little || !little[0])
		return ((char *)big);
	while (big[i] && (i + little_len) <= len)
	{
		if (big[i] == little[0] && ft_check_fit(&big[i], little))
			return ((char *)(big + i));
		i++;
	}
	return ((char *)0);
}
