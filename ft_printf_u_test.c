/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:35:08 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/31 21:33:21 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		ret;

	ft_printf(GREEN_BC" ---------- TEST ft_printf u -------- "GREEN_C"\n");
	ret = ft_printf(" %u ", 0); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u", -1); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 1); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 9); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 10); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 11); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 15); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 16); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 17); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 99); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 100); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 101); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -9); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -10); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -11); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -14); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -15); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -16); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -99); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -100); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -101); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", INT_MAX); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", INT_MIN); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", LONG_MAX); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", LONG_MIN); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", UINT_MAX); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", ULONG_MAX); printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 9223372036854775807LL); printf(" ret : %d\n", ret);
	printf(CYAN_BC" ---------- TEST printf u -------- "CYAN_C"\n");
	ret = printf(" %u ", 0); printf(" ret : %d\n", ret);
	ret = printf(" %u", -1); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 1); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 9); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 10); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 11); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 15); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 16); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 17); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 99); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 100); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 101); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -9); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -10); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -11); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -14); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -15); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -16); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -99); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -100); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -101); printf(" ret : %d\n", ret);
	ret = printf(" %u ", INT_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %u ", INT_MIN); printf(" ret : %d\n", ret);
	ret = printf(" %u ", LONG_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %u ", LONG_MIN); printf(" ret : %d\n", ret);
	ret = printf(" %u ", UINT_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %u ", ULONG_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 9223372036854775807LL); printf(" ret : %d\n", ret);
	printf(WHITE_C);
	return (0);
}
