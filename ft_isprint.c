/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:27:31 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/10/06 18:06:26 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int ch)
{
	return ((ch >= 32 && ch < 127));
}