/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:26:10 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/11/06 13:44:12 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(char const *str1, char const *str2, size_t n)
{
	size_t			i;
	unsigned char	*s_str1;
	unsigned char	*s_str2;

	i = 0;
	s_str1 = (unsigned char *)str1;
	s_str2 = (unsigned char *)str2;
	while (i < n)
	{
		if (s_str1[i] != s_str2[i])
			return (s_str1[i] - s_str2[i]);
		i++;
	}
	return (0);
}
