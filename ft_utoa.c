/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:35:30 by jose-an2          #+#    #+#             */
/*   Updated: 2025/10/21 20:36:24 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char	*ft_utoa(unsigned int n)
{
	char			*str;
	unsigned int	tmp;
	int				len;

	tmp = n;
	len = 1;
	while (tmp /= 10)
		len++;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);

	str[len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

