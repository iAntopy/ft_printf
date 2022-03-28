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

static void	_rec_putnbr_base(unsigned int n, unsigned int radix, char *base)
{
	if (n >= radix)
		_rec_putnbr_base(n / radix, radix, base);
	write(1, base + (n % radix), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	radix;
	unsigned int	n;
	int		is_neg;

	radix = _validate_base(base);
	if (!radix)
		return;
	is_neg = nbr < 0;
	write(1, "-", is_neg);
	n = (unsigned int)((long long int)nbr * (1 - (2 * is_neg)));
	_rec_putnbr_base(n, radix, base);
}
