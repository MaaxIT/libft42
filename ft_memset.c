/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:27:28 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/11/06 13:11:51 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *addr, int ch, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)addr;
	i = 0;
	while (i < n)
	{
		str[i++] = (unsigned char)ch;
	}
	return (str);
}
