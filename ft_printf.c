/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:25:37 by jose-an2          #+#    #+#             */
/*   Updated: 2025/10/16 19:34:15 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	type_check(char const c, va_list args)
{
	if ( c == '%')
		return (ft_putchar_fd(c, 1));
	else if ( c == 'i')
		return (ft_putnbr_pf(va_arg(args, int)));
	else if ( c == 's' )
		return (ft_putstr_fd(va_arg(args, char*), 1));
	else if ( c == 'c')
		return (ft_putchar_fd((char)va_arg(args, int), 1));
//	else if (c == 'p')
//	else if (c == 'x' || c == 'X')
//	else if (c == 'u' || c == 'd')
	return (0);
}

int	ft_printf(char const *str, ...)
{
	int	i;
	int	count;
	va_list	args;

	i = 0;
	count = 0;	
	if(!str)
		return(-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{			
			count = count + (type_check(str[i + 1], args));
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
