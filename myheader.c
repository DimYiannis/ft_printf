#include <unistd.h>

// Helper function to calculate the length of an integer when printed
int ft_intlen(int num)
{
    int len = 0;
    if (num <= 0)
        len++; // Account for '-' sign or '0'
    while (num != 0)
    {
        num /= 10;
        len++;
    }
    return len;
}

// Calculate the length of an unsigned integer when printed
int ft_uintlen(unsigned int num)
{
    int len = 0;

    if (num == 0)
        return 1; // Account for '0'
    while (num != 0)
    {
        num /= 10;
        len++;
    }
    return len;
}

void ft_putstr(char *s)
{
    int i = 0;

    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}

int ft_strlen(char *s)
{
    int i =0;
    while (*s)
    {
        i++;
        s++;
    }
    return i;
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

int ft_base_len(unsigned long num, int base)
{
    int len = 0;

    if (num == 0)
        return 1; // The number "0" is one digit
    while (num != 0)
    {
        num /= base;
        len++;
    }
    return len;
}
