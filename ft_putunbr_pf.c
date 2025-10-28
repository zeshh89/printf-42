/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:33:12 by jose-an2          #+#    #+#             */
/*   Updated: 2025/10/27 23:19:09 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_pf(unsigned int n)
{
	char	*str;
	int		tmp;

	str = ft_utoa(n);
	if (!str)
		return (-1);
	tmp = ft_putstr_fd(str, 1);
	free(str);
	if (tmp == -1)
		return (-1);
	return (tmp);
}
