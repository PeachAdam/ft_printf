/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_p_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:52:13 by yaysu             #+#    #+#             */
/*   Updated: 2022/03/01 16:00:36 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*add_0x(char *str)
{
	int	i;

	i = ft_strlen(str);
	str[i++] = 'x';
	str[i] = '0';
	return (str);
}

char	*ft_strrev(char *str)
{
	size_t	i;
	char	tmp;

	i = 0;
	while (i < ft_strlen(str) / 2)
	{
		tmp = str[i];
		str[i] = str[(ft_strlen(str) - 1) - i];
		str[(ft_strlen(str) - 1) - i] = tmp;
		i++;
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}

void	empty_malloc(char *str)
{
	int	d;

	d = 0;
	while (d < 100)
	{
		str[d] = '\0';
		d++;
	}
}

char	*convert_16(unsigned long long dec)
{
	int		i;
	int		kalan;
	char	*str;

	i = 0;
	str = malloc((sizeof(char)) * 100);
	empty_malloc(str);
	if (!str)
		return (NULL);
	if (dec == 0)
		str[i++] = '0';
	while (dec != 0)
	{
		kalan = dec % 16;
		if (kalan < 10)
			str[i++] = '0' + kalan;
		else
			str[i++] = 87 + kalan;
		dec = dec / 16;
	}
	str = add_0x(str);
	str = ft_strrev(str);
	return (str);
}
