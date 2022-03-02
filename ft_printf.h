/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:52:13 by yaysu             #+#    #+#             */
/*   Updated: 2022/03/01 15:57:54 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

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
char	*convert_16x(unsigned int dec);
char	*convert_16x_upper(unsigned int dec);
int		ft_putunbr(unsigned int n, int *len);
int		ft_putstr_free(char *s);
void	empty_malloc(char *str);

#endif
