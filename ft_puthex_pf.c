/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:41:21 by jose-an2          #+#    #+#             */
/*   Updated: 2025/10/21 20:10:31 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_pf(unsigned int n, int uppercase)
{
	char	*base;
	int		count;
	int		tmp;

	tmp = 0;
	count = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
	{
		tmp = ft_puthex_pf(n / 16, uppercase);
		if (tmp == -1)
			return (-1);
		else
			count += tmp;
	}
	count += ft_putchar_fd(base[n % 16], 1);
	return (count);
}
