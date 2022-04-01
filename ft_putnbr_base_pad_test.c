#include "ft_printf.h"

int	main(int argc, char *argv[])
{
	int	ret;

	if (argc > 2)
	{
		ret = ft_putnbr_base_pad(ft_atoi(argv[1]), "0123456789abcdef", ft_atoi(argv[2]));
		ft_putstr("\nft_putnbr_base_pad return value : ");
		ft_putnbr(ret);
	}
	return (0);
}
