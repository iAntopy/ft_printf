/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_pad.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:54:20 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/31 18:12:04 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

static ssize_t	g_log_radix;

static unsigned int	_validate_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	if (!base[0] || !base[1])	
		return (0);
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (0);
	}
	return (i);
}

static void	_rec_putnbr_base(unsigned long long int n, unsigned int radix, char *base, int zpad)
{
	if (n >= radix || zpad > 1)
	{
		_rec_putnbr_base(n / radix, radix, base, zpad - 1);
		g_log_radix++;
	}
	write(1, base + (n % radix), 1);
}

ssize_t	ft_putnbr_base_pad(unsigned long long int nbr, char *base, int zpad)
{
	unsigned int	radix;

	g_log_radix = 0;
	radix = _validate_base(base);
	if (!radix)
		return (0);
	_rec_putnbr_base(nbr, radix, base, zpad);
	return (g_log_radix + 1);
}
