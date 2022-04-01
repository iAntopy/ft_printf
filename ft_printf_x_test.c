/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:35:08 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/31 21:43:05 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		ret;

	ft_printf(GREEN_BC" ---------- TEST ft_printf u -------- "GREEN_C"\n");
	ret = ft_printf(" %x ", 0); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x", -1); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 1); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 9); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 10); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 11); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 15); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 16); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 17); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 99); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 100); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 101); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -9); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -10); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -11); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -14); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -15); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -16); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -99); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -100); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -101); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", INT_MAX); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", INT_MIN); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", LONG_MAX); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", LONG_MIN); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", UINT_MAX); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", ULONG_MAX); printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 9223372036854775807LL); printf(" ret : %d\n", ret);
	printf(CYAN_BC" ---------- TEST printf u -------- "CYAN_C"\n");
	ret = printf(" %x ", 0); printf(" ret : %d\n", ret);
	ret = printf(" %x", -1); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 1); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 9); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 10); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 11); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 15); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 16); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 17); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 99); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 100); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 101); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -9); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -10); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -11); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -14); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -15); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -16); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -99); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -100); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -101); printf(" ret : %d\n", ret);
	ret = printf(" %x ", INT_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %x ", INT_MIN); printf(" ret : %d\n", ret);
	ret = printf(" %x ", LONG_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %x ", LONG_MIN); printf(" ret : %d\n", ret);
	ret = printf(" %x ", UINT_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %x ", ULONG_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 9223372036854775807LL); printf(" ret : %d\n", ret);
	printf(WHITE_C);
	return (0);
}
