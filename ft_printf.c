/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:25:37 by jose-an2          #+#    #+#             */
/*   Updated: 2025/10/14 21:21:24 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	type_check(char const c, int n, va_list args);
{
	int		count;
	long	num;
	char 	*str;

	count = 0;
	if ( c == '%')
		count = ft_putchar_fd('%', 1);
	else if ( c == 'i')
	{
		num = va_arg(args, int);
		count = ft_putnbr_fd(num, 1);
	}
	else if ( c == 's' )
	{
		str = va_arg(args, char*);
		count = ft_putstr_fd(str, 1);
	}
	else if ( c == 'c')
	{
		str = va_arg(args, char);
		count = ft_putchar_fd(str, 1);
	return (count);
}

int	ft_printf(char const *str, ...)
{
	int	i;
	int	count;
	va_list	args;
	
	if(!str)
		return(-1);
	va_start(args, str);
	while (str)
	{
		if (str[i] == '%')
		{			
			count = count + (type_check(str[i + 1], i, args));
			i = i + 2;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			i++;
			count++;
		}
	}
	return (count);
}	
