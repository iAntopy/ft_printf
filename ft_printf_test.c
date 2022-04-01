/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:13:20 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/31 20:05:29 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ret;

	ft_printf(GREEN_BC"--------- TEST ft_printf ---------\n"GREEN_C);
	ret = ft_printf("HOHOHO : %d, %d, %c, %s\n", 24, 42, 'a', "wiaboo");
	ft_printf("ret value : %d\n", ret);
	ft_printf("ret value ptr : %p\n", &ret);
	ft_printf("ret value int hex | lower, upper : %x, %X\n", ret, ret);
	ft_printf("ft_printf nb zero : %d\n", 0);
	ft_printf(CYAN_BC"--------- TEST printf ---------\n"CYAN_C);
	ret = printf("HOHOHO : %d, %d, %c, %s\n", 24, 42, 'a', "wiaboo");
	printf("ret value : %d\n", ret);
	printf("ret value ptr : %p\n", &ret);
	printf("ret value int hex | lower, upper : %x, %X\n", ret, ret);
	printf("printf nb zero : %d\n", 0);
	printf(WHITE_C);
	return (0);
}
