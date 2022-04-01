/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:31:36 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/31 21:38:55 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	g_char_count;

ssize_t	ft_putchar_count(char c)
{
	return (write(1, &c, 1));
}

ssize_t	ft_putstr_count(const char *str)
{
	if (!str)
		return ((ssize_t)write(1, "(null)", 6));
	return ((ssize_t)write(1, str, ft_strlen(str)));
}

static void	_rec_putnbr_count(unsigned int n)
{
	if (n >= 10)
	{
		_rec_putnbr_count(n / 10);
		g_char_count++;
	}
	ft_putchar('0' + (n % 10));
}

ssize_t	ft_putnbr_count(int nbr)
{
	long long int	n;
	int				is_neg;

	n = (long long int)nbr;
	is_neg = n < 0;
	g_char_count = 1 + is_neg;
	write(1, "-", is_neg);
	n *= 1 - (2 * is_neg);
	_rec_putnbr_count((unsigned int)n);
	return (g_char_count);
}

ssize_t	ft_putuint_count(unsigned int nbr)
{
	g_char_count = 1;
	_rec_putnbr_count(nbr);
	return (g_char_count);
}
