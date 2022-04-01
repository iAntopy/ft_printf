/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:16:50 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/31 22:26:15 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

ssize_t	ft_log10(int nbr);
ssize_t	ft_putchar_count(char c);
ssize_t	ft_putstr_count(const char *c);
ssize_t	ft_putnbr_count(int nbr);
ssize_t	ft_putuint_count(unsigned int nbr);
ssize_t	ft_putlowerx_count(unsigned int nbr);
ssize_t	ft_putupperx_count(unsigned int nbr);
ssize_t	ft_putnbr_base_pad(unsigned long long int nbr, char *base, int zpad);
ssize_t	ft_putptr_count(size_t ptr);
int		ft_printf(const char *str, ...);

#endif
