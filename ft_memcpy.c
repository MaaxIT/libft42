/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:26:23 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/11/06 13:13:19 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*s_dest;
	char const	*s_src;

	if (!dest && !src)
		return ((void *)0);
	s_dest = dest;
	s_src = src;
	while (n--)
		*s_dest++ = *s_src++;
	return (dest);
}
