/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:25:37 by jose-an2          #+#    #+#             */
/*   Updated: 2025/10/28 18:32:26 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type_check(char const c, va_list args)
{
	void	*ptr;

	if (c == '%')
		return (ft_putchar_fd(c, 1));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr_pf(va_arg(args, int)));
	else if (c == 's' )
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (c == 'c')
		return (ft_putchar_fd((char)va_arg(args, int), 1));
	else if (c == 'p')
	{
		ptr = (va_arg(args, void *));
		return (ft_putptr_pf((unsigned long)ptr));
	}
	else if (c == 'x')
		return (ft_puthex_pf(va_arg(args, unsigned int), 0));
	else if (c == 'X')
		return (ft_puthex_pf(va_arg(args, unsigned int), 1));
	else if (c == 'u')
		return (ft_putunbr_pf((va_arg(args, unsigned int))));
	return (-1);
}

static int	print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

static int	format_print(const char *str, va_list args)
{
	int	i;
	int	count;
	int	tmp;

	i = 0;
	count = 0;
	tmp = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			tmp = (type_check(str[i + 1], args));
			if (tmp == -1)
				return (-1);
			count = count + tmp;
			i = i + 2;
		}
		else if (str[i] == '%' && !str[i + 1])
			return (-1);
		else
			count += print_char(str[i++]);
	}
	return (count);
}

int	ft_printf(char const *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	count = format_print(str, args);
	va_end(args);
	return (count);
}
