/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:53:12 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/31 20:28:30 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	ret;

	ft_printf(GREEN_BC"----------- TEST ft_printf ptr -----------"GREEN_C"\n");
	ret = ft_printf(" %p ", (void *)(-1)); printf("ret : %d\n", ret);
	ret = ft_printf(" %p ",  (void *)(1)); printf("ret : %d\n", ret);
	ret = ft_printf(" %p ", (void *)15); printf("ret : %d\n", ret);
	ret = ft_printf(" %p ", (void *)16); printf("ret : %d\n", ret);
	ret = ft_printf(" %p ", (void *)17); printf("ret : %d\n", ret);
	ret = ft_printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX); printf("ret : %d\n", ret);
	ret = ft_printf(" %p %p ", (void *)INT_MIN, (void *)INT_MAX); printf("ret : %d\n", ret);
	ret = ft_printf(" %p %p ", (void *)ULONG_MAX, (void *)(-ULONG_MAX)); printf("ret : %d\n", ret);
	ret = ft_printf(" %p %p ", (void *)0, (void *)0); printf("ret : %d\n", ret);
	ret = ft_printf(" %p %p ", NULL, NULL); printf("ret : %d\n", ret);
	printf(CYAN_BC"----------- TEST printf ptr -----------"CYAN_C"\n");
	ret = printf(" %p ", (void *)(-1)); printf("ret : %d\n", ret);
	ret = printf(" %p ",  (void *)(1)); printf("ret : %d\n", ret);
	ret = printf(" %p ", (void *)15); printf("ret : %d\n", ret);
	ret = printf(" %p ", (void *)16); printf("ret : %d\n", ret);
	ret = printf(" %p ", (void *)17); printf("ret : %d\n", ret);
	ret = printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX); printf("ret : %d\n", ret);
	ret = printf(" %p %p ", (void *)INT_MIN, (void *)INT_MAX); printf("ret : %d\n", ret);
	ret = printf(" %p %p ", (void *)ULONG_MAX, (void *)(-ULONG_MAX)); printf("ret : %d\n", ret);
	ret = printf(" %p %p ", (void *)0, (void *)0); printf("ret : %d\n", ret);
	ret = ft_printf(" %p %p ", NULL, NULL); printf("ret : %d\n", ret);
	return (0);
}
