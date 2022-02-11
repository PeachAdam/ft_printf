/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:11:41 by yaysu             #+#    #+#             */
/*   Updated: 2022/02/11 11:17:35 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return(write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if(s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	if (s)
	{
		while(s[i] != '\0')
		{
			len += ft_putchar(s[i]);
			i++;
		}
	}
	return(len);
}

int	ft_putstr_free(char *s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	if(s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	if (s)
	{
		while(s[i] != '\0')
		{
			len += ft_putchar(s[i]);
			i++;
		}
	}
    while (i >= 0)
        s[i--] = '\0';
	free(s);
	return(len);
}

int ft_putnbr(long n, int *len)
{
	if(n < 0)
	{
		n *= -1;
		*len += ft_putchar('-');
	}
	if (n)
	{
		if (n / 10)
			ft_putnbr (n/10, len);
		*len += ft_putchar (n % 10 + '0');
	}
	else 
		*len += ft_putchar('0');
	return(*len);
}

int	ft_putunbr(unsigned int n, int *len)
{
	if (n)
	{
		if (n / 10)
			ft_putunbr(n/10, len);
		*len += ft_putchar(n % 10 + '0');
	}
	else
		*len += ft_putchar('0');
	return(*len);
}
