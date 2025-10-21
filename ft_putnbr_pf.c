/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:49:19 by jose-an2          #+#    #+#             */
/*   Updated: 2025/10/21 20:29:40 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n)
{
	char	*str;
	int		tmp;

	tmp = 0;
	if (n == -2147483648)
	{
		tmp = ft_putstr_fd("-2147483648", 1);
		if (tmp == -1)
			return (-1);
		return (tmp);
	}
	else
	{
		str = ft_itoa(n);
		tmp = ft_putstr_fd(str, 1);
		free(str);
		if (tmp == -1)
			return (-1);
		return (tmp);
	}
}
