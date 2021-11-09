/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:26:50 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/11/06 13:42:21 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr_result;

	ptr_result = malloc(count * size);
	if (!ptr_result)
		return ((void *)0);
	ft_memset(ptr_result, 0, count * size);
	return (ptr_result);
}
