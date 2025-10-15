/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:41:54 by jose-an2          #+#    #+#             */
/*   Updated: 2025/10/15 21:32:00 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
//function declarations

int		ft_strlen(char *s);:
void	ft_putchar_fd(char c, int fd);
void	ft_putstring_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_printf(char const *str, ...);

#endif
