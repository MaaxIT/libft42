/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:26:31 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/10/13 16:44:58 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t n)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	final_value;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen((char *)src);
	i = 0;
	final_value = 0;
	if (n > dest_len)
		final_value = dest_len + src_len;
	else
		final_value = n + src_len;
	while (src[i] && n > (dest_len + 1))
		dest[dest_len++] = src[i++];
	dest[dest_len] = '\0';
	return (final_value);
}
