/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:28:33 by yaysu             #+#    #+#             */
/*   Updated: 2022/02/08 21:32:45 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	flag_func(const char *str, va_list *format, size_t i)
{
	int len;
	len = 0;
	if(str[i] == '%')
	{
		len = ft_putchar('%');
	}
	else if(str[i] == 'c')
	{
		len = ft_putchar(va_arg(*format, int));
	}
	else if(str[i] == 's')
	{
		len = ft_putstr(va_arg(*format, char*));
	}
	else if(str[i] == 'd' || str[i] == 'i')
	{
		len = ft_putnbr(va_arg(*format,int), &len);
	}
	else if (str[i] == 'p')
	{
		len = ft_putstr(convert_16(va_arg(*format, unsigned long long)));
	}
	else if (str[i] == 'u')
	{
		len = ft_putunbr(va_arg(*format, int), &len);
	}
	else if (str[i] == 'x')
	{
		len = ft_putstr(convert_16x(va_arg(*format, unsigned long long)));
	}
	else if (str[i] == 'X')
	{
		len = ft_putstr(convert_16x_upper(va_arg(*format, unsigned long long)));
	}
	return (len);
}

int ft_printf(const char *str, ...)
{
	size_t	i;
	int		len;
	va_list format;

	va_start(format, str);
	i = 0;
	len = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			len += flag_func(str, &format, i);
		} 
		else
		{
			write(1, &(str[i]), 1);
			len++;
		}
		i++;
	}
	va_end(format);
	return (len);
}
