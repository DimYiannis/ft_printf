#include <unistd.h>

void ft_putstr(char *s)
{
    int i = 0;

    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if (n == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        n = 147483648;
    }
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr_unsigned(unsigned int n)
{
    if (n >= 10)
    {
        ft_putnbr_unsigned(n / 10);
    }
    ft_putchar(n % 10 + '0');
}

void ft_putnbr_base(int num, int base, int uppercase)
{
    char *digits;

    // Choose the digit set based on uppercase/lowercase for hex (and others if needed)
    if (uppercase)
    {
        digits = "0123456789ABCDEF";
    }
    else
    {
        digits = "0123456789abcdef";
    }

    if (num >= (unsigned long)base)
    {
        // Print the higher digits first
        ft_putchar_base(num / base, base, uppercase);
    }

    ft_putchar(digits[num % base]); // Print the current digit
}
