/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_x_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:27:41 by yaysu             #+#    #+#             */
/*   Updated: 2022/02/08 21:07:14 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char *convert_16x(long long dec)
{
	int		i;
	int		kalan;
	char	*str;

	i = 0;
	str = malloc((sizeof(char)) * 100);
	if (!str)
		return(NULL);
	if (dec == 0)
		str[i++] = '0';
	while (dec != 0)
	{
		kalan = dec % 16;
		if (kalan < 10)
			str[i++] = '0' + kalan ;
		else
			str[i++] = 87 + kalan;
		dec = dec / 16;
	}
	str = ft_strrev(str);
	return(str);
}

char	 *convert_16x_upper(long long dec)
{
	int		i;
	int		kalan;
	char	*str;

	i = 0;
	str = malloc((sizeof(char)) * 100);
	if (!str)
		return(NULL);
	if (dec == 0)
		str[i++] = '0';
	while (dec != 0)
	{
		kalan = dec % 16;
		if (kalan < 10)
			str[i++] = '0' + kalan ;
		else
			str[i++] = 55 + kalan;
		dec = dec / 16;
	}
	str = ft_strrev(str);
	return(str);
}
