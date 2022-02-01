/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:10:42 by yaysu             #+#    #+#             */
/*   Updated: 2022/01/19 15:10:35 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
void	ft_putstr(char *str);
int		ft_printstr(char *str);
char	*ft_itoa(int n);
int		ft_print(int n);
int		ft_print_yuzde(void);
int		ft_lastfunc(va_list args, const char format);
int		ft_printnbr(int n);

#endif
