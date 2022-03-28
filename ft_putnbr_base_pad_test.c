#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base_pad(int nb, char *base, short int zpad);

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		ft_putnbr_base_pad(atoi(argv[1]), "0123456789", atoi(argv[2]));
	}
	return (0);
}
