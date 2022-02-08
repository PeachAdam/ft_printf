/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:52:13 by yaysu             #+#    #+#             */
/*   Updated: 2022/02/08 15:37:33 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putnbr(long n, int *len);
int		ft_putstr(char *s);
int		p_func(unsigned long long dec);
size_t	ft_strlen(const char *s);
char	*add_0x(char *str);
char	*ft_strrev(char *str);
char	*convert_16(unsigned long long dec);
int		p_flag(unsigned long long dec);
char	*convert_16x(long long dec);

#endif
