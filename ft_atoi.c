/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:25:50 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/11/09 16:28:35 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

static int	ft_atoi_check_maxlong(unsigned long long res, int multiplier)
{
	if (res >= 9223372036854775808ULL)
	{
		if (multiplier == 1)
			return (-1);
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(char const *str)
{
	int					i;
	unsigned long long	res;
	int					multiplier;

	i = 0;
	multiplier = 1;
	res = 0;
	while (str[i] && ft_is_whitespace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			multiplier *= -1;
		i++;
	}
	while (str[i])
	{
		if (ft_isdigit((int)str[i]))
			res = (res * 10) + (str[i++] - '0');
		else
			break ;
		if (ft_atoi_check_maxlong(res, multiplier) != 1)
			return (ft_atoi_check_maxlong(res, multiplier));
	}
	return (res * multiplier);
}
