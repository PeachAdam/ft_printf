/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastfunc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:35:05 by yaysu             #+#    #+#             */
/*   Updated: 2022/01/19 13:59:06 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_yuzde(void)
{
	write(1, "%", 1);
	return (1);
}

int	last_func(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
			len += ft_putchar(va_arg(args, int));
	else if (format == 's')
			len += ft_printstr(va_arg(args, char *));
	/*else if (format == 'p')
			len += ft_print_ptr(va_arg(args, unsigned long long)); */
	else if (format == 'i' || format == 'd')
			len += ft_printnbr(va_arg(args, int));
	/*else if (format == 'u')
			len += ft_print_unsigned(va_arg(args, unsigned int)); */
	/*else if (format == 'x' || format == 'X')
			len += ft_print_hex(va_arg(args, unsigned int)); */
	else if (format == '%')
			len += ft_print_yuzde();
	return (len);
}
