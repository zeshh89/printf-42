/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:13:44 by jose-an2          #+#    #+#             */
/*   Updated: 2025/10/16 19:34:58 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int	main(void)
{
	int	num = 12345;
	char c = 'e';
	char *str = "lololol";
	int letras;

	letras = ft_printf("numero %i char %c str %s signo %%\n", num, c, str);
	printf("numero %i char %c str %s signo %% \n", num, c, str);
	printf("impresos %i caracteres", letras);
	return (0);
}
