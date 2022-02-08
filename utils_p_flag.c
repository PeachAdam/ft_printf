/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_converter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:52:13 by yaysu             #+#    #+#             */
/*   Updated: 2022/02/08 13:14:43 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <stdlib.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] !=  '\0')
        i++;
    return(i);
}

char *add_0x(char *str)
{
	int i;

	i = ft_strlen(str);
	str[i++] = 'x';
	str[i++] = '0';
	str[i] = '\0';

	return(str);
}

char *ft_strrev(char *str)
{
    int i;
	char tmp;

    i = 0;
    while(i < ft_strlen(str) / 2)
    {
		tmp = str[i];
		str[i] = str[(ft_strlen(str) - 1) - i];
		str[(ft_strlen(str) - 1) - i] = tmp;
        i++;
    }
	return(str);
}

char *convert_16(unsigned long long dec)
{
    int i;
    int kalan;
    char *str;
    
    i = 0;
    str = malloc((sizeof(char)) * 100);
	if (!str)
		return(NULL);
    if (dec == 0)
        str[i++]= '0';
    while (dec != 0)
    {
        kalan = dec % 16;
        if (kalan < 10)
            str[i++] = '0' + kalan;
        else
            str[i++]= 87 + kalan;
        dec = dec / 16;
    }
	str = add_0x(str);
	str = ft_strrev(str);
    return(str);
}
