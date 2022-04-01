/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:23:57 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/31 22:23:01 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_flags(const char *fmt)
{
	int	nb_args;

	nb_args = 0;
	while (*fmt)
		if (*(fmt++) == '%')
			nb_args++;
	return (nb_args);
}

static int	print_hexa(unsigned int x, int use_upper)
{
	if (use_upper)
		return (ft_putupperx_count(x));
	else
		return (ft_putlowerx_count(x));
}

static int	print_pointer(size_t p)
{
	write(1, "0x", 2);
	return (2 + ft_putptr_count(p));
}

static int	print_flag(const char *fptr, va_list *vlst)
{
	char	flag;

	flag = *fptr;
	if (flag == 'c')
		return (ft_putchar_count((int)va_arg(*vlst, int)));
	else if (flag == 's')
		return (ft_putstr_count((char *)va_arg(*vlst, char *)));
	else if (flag == 'p')
		return (print_pointer((size_t)va_arg(*vlst, size_t)));
	else if (flag == 'd')
		return (ft_putnbr_count((int)va_arg(*vlst, int)));
	else if (flag == 'i')
		return (ft_putnbr_count((int)va_arg(*vlst, int)));
	else if (flag == 'u')
		return (ft_putuint_count((unsigned int)va_arg(*vlst, unsigned int)));
	else if (flag == 'x')
		return (print_hexa((unsigned int)va_arg(*vlst, unsigned int), 0));
	else if (flag == 'X')
		return (print_hexa((unsigned int)va_arg(*vlst, unsigned int), 1));
	else if (flag == '%')
		return (ft_putchar_count('%'));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	int		nb_args;
	va_list	vlst;
	int		nb_wchars;

	nb_wchars = 0;
	nb_args = count_flags(fmt);
	va_start(vlst, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
			nb_wchars += print_flag(++fmt, &vlst);
		else
		{
			ft_putchar(*fmt);
			nb_wchars++;
		}
		fmt++;
	}
	va_end(vlst);
	return (nb_wchars);
}
