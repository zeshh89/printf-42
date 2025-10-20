
#include "libftprintf.h"

int     ft_puthex_pf(unsigned int n, int uppercase)
{
        char    *base;
        int     count;

        count = 0;
        if (uppercase)
                base = "0123456789ABCDEF";
        else
                base = "0123456789abcdef";
        if (n >= 16)
                count += ft_puthex_pf( n / 16, uppercase);
        count += ft_putchar_fd(base[n % 16], 1);
        return (count);
}
