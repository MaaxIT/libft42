/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:27:53 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/11/06 13:15:05 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	size_t	i;
	char	search;

	i = ft_strlen((char *)str) + 1;
	search = (char)c;
	while (i--)
		if (str[i] == search)
			return ((char *)&str[i]);
	return ((char *)0);
}
