/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:49:19 by jose-an2          #+#    #+#             */
/*   Updated: 2025/10/15 22:00:09 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_pf(int n)
{
	char	*str;

	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648"), 1);
	else
	{
		str = ft_itoa(n);
		return (ft_putstr_fd(str, 1));
	}
}
