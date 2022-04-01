/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:35:08 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/31 20:47:34 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	sample[] = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut an    te blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
	int		ret;

	ft_printf(GREEN_BC" ---------- TEST ft_printf str -------- "GREEN_C);
	ret = ft_printf("%s", ""); printf(" ret : %d\n", ret);
	ret = ft_printf(" %s", ""); printf(" ret : %d\n", ret);
	ret = ft_printf("%s ", ""); printf(" ret : %d\n", ret);
	ret = ft_printf(" %s ", ""); printf(" ret : %d\n", ret);
	ret = ft_printf(" %s ", "-"); printf(" ret : %d\n", ret);
	ret = ft_printf(" %s %s ", "", "-"); printf(" ret : %d\n", ret);
	ret = ft_printf(" %s %s ", " - ", ""); printf(" ret : %d\n", ret);
	ret = ft_printf(" %s %s %s %s %s", " - ", "", "4", "", sample); printf(" ret : %d\n", ret);
	ret = ft_printf(" %s %s %s %s %s", " - ", "", "4", "", "2 "); printf(" ret : %d\n", ret);
	ret = ft_printf(" NULL %s NULL ", NULL); printf(" ret : %d\n", ret);
	printf(CYAN_BC" ---------- TEST ft_printf str -------- "CYAN_C);
	ret = printf("%s", ""); printf(" ret : %d\n", ret);
	ret = printf(" %s", ""); printf(" ret : %d\n", ret);
	ret = printf("%s ", ""); printf(" ret : %d\n", ret);
	ret = printf(" %s ", ""); printf(" ret : %d\n", ret);
	ret = printf(" %s ", "-"); printf(" ret : %d\n", ret);
	ret = printf(" %s %s ", "", "-"); printf(" ret : %d\n", ret);
	ret = printf(" %s %s ", " - ", ""); printf(" ret : %d\n", ret);
	ret = printf(" %s %s %s %s %s", " - ", "", "4", "", sample); printf(" ret : %d\n", ret);
	ret = printf(" %s %s %s %s %s", " - ", "", "4", "", "2 "); printf(" ret : %d\n", ret);
	ret = printf(" NULL %s NULL ", NULL); printf(" ret : %d\n", ret);
	printf(WHITE_C);
	return (0);
}
