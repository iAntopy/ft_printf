#include <stdarg.h>
#include <stdio.h>
#include "libft.h"

void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr_base_pad(unsigned long long int nbr, char *base, int zpad);

static int	count_flags(const char *fmt)
{
	int	nb_args;

	while (*fmt)
		if (*(fmt++) == '%')
			nb_args++;
	return (nb_args);
}

static void	print_hexa(unsigned int x, int use_upper)
{
	ft_putstr("0x");
	if (use_upper)
		ft_putnbr_base((int)x, "0123456789ABCDEF");
	else
		ft_putnbr_base((int)x, "0123456789abcdef");
}

static void	print_pointer(unsigned long long int p)
{
	write(1, "0x", 2);
	ft_putnbr_base_pad(p, "0123456789abcdef", 8);
}

static int	print_flag(const char *fptr, va_list vlst)
{
	char	flag;

	flag = *fptr;
	if (flag == 'c')
		ft_putchar(va_arg(vlst, int));
	else if (flag == 's')
		ft_putstr(va_arg(vlst, char *));
	else if (flag == 'p')
		print_pointer(va_arg(vlst, unsigned long long int));
	else if (flag == 'd')
		ft_putnbr(va_arg(vlst, int));
	else if (flag == 'i')
		ft_putnbr(va_arg(vlst, int));
	else if (flag == 'u')
		ft_putnbr(va_arg(vlst, unsigned int));
	else if (flag == 'x')
		print_hexa(va_arg(vlst, unsigned int), 0);
	else if (flag == 'X')
		print_hexa(va_arg(vlst, unsigned int), 1);
	else if (flag == '%')
		ft_putchar('%');
	return (0);
}

int ft_printf(const char *fmt, ...)
{
	int	nb_args;
	va_list	vlst;
	int	nb_wchars;

	nb_wchars = 0;
	nb_args = count_flags(fmt);
	ft_putstr("nb_args : ");
	ft_putnbr(nb_args);
	write(1, "\n", 1);
	va_start(vlst, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
			nb_wchars += print_flag(++fmt, vlst);
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

