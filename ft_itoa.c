/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:05:10 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/11/08 19:53:39 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoa_digits(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_itoa_putnbr(long n, char *s, int *i)
{
	if (n <= 9)
		s[(*i)++] = n + '0';
	else
	{
		ft_itoa_putnbr(n / 10, s, i);
		ft_itoa_putnbr(n % 10, s, i);
	}
}

char	*ft_itoa(int n)
{
	char	*final;
	int		i;
	long	long_n;

	long_n = n;
	final = malloc(sizeof(char) * (ft_itoa_digits(long_n) + 1));
	if (!final)
		return ((char *)0);
	i = 0;
	if (long_n < 0)
	{
		final[i++] = '-';
		long_n *= -1;
	}
	ft_itoa_putnbr(long_n, final, &i);
	final[i] = '\0';
	return (final);
}
