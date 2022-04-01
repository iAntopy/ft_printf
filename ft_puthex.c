/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:10:47 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/31 21:54:24 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static ssize_t	g_char_count;

static void	_rec_puthex(size_t ptr, char *base)
{
	if (ptr >= 16)
	{
		_rec_puthex(ptr / 16, base);
		g_char_count++;
	}
	write(1, base + (ptr % 16), 1);
}

ssize_t	ft_putX_count(unsigned int nbr)
{
	g_char_count = 1;
	_rec_puthex(nbr, HEX_BASE_UPPERCASE);
	return (g_char_count);
}

ssize_t	ft_putx_count(unsigned int nbr)
{
	g_char_count = 1;
	_rec_puthex(nbr, HEX_BASE_LOWERCASE);
	return (g_char_count);
}

ssize_t	ft_putptr_count(size_t ptr)
{
	g_char_count = 1;
	_rec_puthex(ptr, HEX_BASE_LOWERCASE);
	return (g_char_count);
}
