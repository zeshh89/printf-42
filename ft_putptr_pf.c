
#include "libftprintf.h"

static int	ft_putptr_rec(unsigned long n)
{
	int	count;
	char	*str;

	count = 0;
	str = "0123456789abcdef";
	if ( n >= 16)
		count += ft_putptr_rec(n / 16);
	count += ft_putchar_fd(str[n % 16], 1);
	return (count);
}

int	ft_putptr_pf(unsigned long n)
{
	int		count;

	count = 0;
	if (n == 0)
		return (ft_putstr_fd("0x0", 1));
	count += ft_putstr_fd("0x", 1);
	count += ft_putptr_rec(n);
	return (count);
}
