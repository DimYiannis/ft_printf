#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);   
}

void ft_putnbr(int n) {
    if (n == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        n = 147483648;
    }
    if (n<0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n>=10)
    {
        ft_putnbr(n /10);
    }
    ft_putchar(n%10 + '0');
    
}

void ft_putchar(char c) {
    write(1,&c,1);
}

void ft_putnbr_unsigned(n) {
     if (n == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        n = 147483648;
    }

    if (n>=10)
    {
        ft_putnbr(n /10);
    }
    ft_putchar(n%10 + '0');
    
}