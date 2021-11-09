/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:26:06 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/11/06 13:14:38 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s_str;
	unsigned char	s_search;
	size_t			i;

	i = 0;
	s_str = (unsigned char *)str;
	s_search = (unsigned char)c;
	while (i < n)
	{
		if (s_str[i] == s_search)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return ((void *)0);
}
