/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:26:26 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/11/09 16:23:18 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*s_dest;
	const unsigned char		*s_src;
	size_t					i;

	if (!dest && !src)
		return ((void *)0);
	i = 0;
	if (dest == src)
		return (dest);
	s_dest = dest;
	s_src = src;
	if (s_src < s_dest)
		while (++i <= n)
			s_dest[n - i] = s_src[n - i];
	else
		while (n--)
			*s_dest++ = *s_src++;
	return (dest);
}
