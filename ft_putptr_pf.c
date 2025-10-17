
#include "libftprintf.h"

int ft_putptr_pf(void *ptr)
{
	unsigned long	ad;
	int		count;

	count = 0;
	if (!ptr)
		return (0);
	ad = (unsigned long)ptr;
	count += ft_putstr_fd("0x", 1);
	count += ft_puthex_pf(ad, 0);
	return (count);
}
