/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:34:41 by jose-an2          #+#    #+#             */
/*   Updated: 2025/10/21 20:23:54 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	tmp;

	if (!s)
		return (write(fd, "(null)", 6));
	i = 0;
	tmp = 0;
	while (s[i])
	{
		tmp = ft_putchar_fd(s[i], fd);
		if (tmp == -1)
			return (-1);
		i++;
	}
	return (i);
}
