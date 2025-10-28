/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:41:54 by jose-an2          #+#    #+#             */
/*   Updated: 2025/10/27 23:14:14 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
//function declarations

char	*ft_itoa(int n);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr_pf(int n);
int		ft_printf(char const *str, ...);
int		ft_puthex_pf(unsigned int n, int uppercase);
int		ft_putptr_pf(unsigned long ptr);
char	*ft_utoa(unsigned int n);
int		ft_putunbr_pf(unsigned int n);

#endif
