#include <unistd.h>

static unsigned int	_validate_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	if (base[0] == '\0' || base[1] == '\0')	
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
		_rec_putnbr_base(n / radix, radix, base, zpad - 1);
	write(1, base + (n % radix), 1);
}

void	ft_putnbr_base_pad(unsigned long long int nbr, char *base, int zpad)
{
	unsigned int	radix;

	radix = _validate_base(base);
	if (!radix)
		return;
	_rec_putnbr_base(nbr, radix, base, zpad);
}
