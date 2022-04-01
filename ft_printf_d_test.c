/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:35:08 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/31 21:04:12 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		ret;

	ft_printf(GREEN_BC" ---------- TEST ft_printf d -------- "GREEN_C"\n");
	ret = ft_printf(" %d ", 0); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d", -1); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 1); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 9); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 10); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 11); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 15); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 16); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 17); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 99); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 100); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 101); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -9); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -10); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -11); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -14); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -15); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -16); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -99); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -100); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -101); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", INT_MAX); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", INT_MIN); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", LONG_MAX); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", LONG_MIN); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", UINT_MAX); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", ULONG_MAX); printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 9223372036854775807LL); printf(" ret : %d\n", ret);
	printf(CYAN_BC" ---------- TEST printf d -------- "CYAN_C"\n");
	ret = printf(" %d ", 0); printf(" ret : %d\n", ret);
	ret = printf(" %d", -1); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 1); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 9); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 10); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 11); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 15); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 16); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 17); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 99); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 100); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 101); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -9); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -10); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -11); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -14); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -15); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -16); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -99); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -100); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -101); printf(" ret : %d\n", ret);
	ret = printf(" %d ", INT_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %d ", INT_MIN); printf(" ret : %d\n", ret);
	ret = printf(" %d ", LONG_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %d ", LONG_MIN); printf(" ret : %d\n", ret);
	ret = printf(" %d ", UINT_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %d ", ULONG_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 9223372036854775807LL); printf(" ret : %d\n", ret);
	printf(WHITE_C);
	return (0);
}
