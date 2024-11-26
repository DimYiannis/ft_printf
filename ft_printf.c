#include <stdarg.h>
#include "myheader.h"

// A variadic function is a function which accepts a variable
// number of arguments. It is characterized by the "..." in a function.
int ft_printf(const char *format, ...)
{

    // object type suitable for holding the information needed by
    // the macros va_start, va_copy, va_arg, and va_end
    va_list args;

    // The macro va_start function will somehow initialize everything,
    // before we start moving through our variable argument list (va_list).
    va_start(args, format);

    int n = 0;
    int count = 0;
    while (format[n] != '\0')
    {
        if (format[n] != '%')
        {
            ft_putchar(format[n]);
            count++;
        }
        else
        {
            n++;
            if (format[n] == 's')
            {
// Retrieve the next argument from the variable argument list (args)
// We expect this argument to be a string (char *), so we cast it accordingly.
// The value of 'str' will be the pointer to the string passed to the ft_printf function.
                char *str = va_arg(args, char *);
                int i = 0;
// Print the string using array indexing to traverse each character
                while (str[i])
                {
                    ft_putchar(str[i]);
                    i++;
                }
                count += i;
            }
            else if (format[n] == 'd' || format[n]=='i')
            {
                int num = va_arg(args, int);
                ft_putnbr(num);
                count++;
            }
            else if (format[n] == 'c' )
            {
                char c = va_arg(args, int); // char is promoted to int in variadic functions
                ft_putchar(c);
                count++;
            }
            else if (format[n == 'u'])
            {
               unsigned int num = va_arg(args, unsigned int);
               ft_putnbr_unsigned(num);
               count++;
            }
            
            
            
            
        }
        n++;
    }

    // Once finished -> clean up the object initialized by calling va_start.
    // va_end can modify the object, which is called "args"
    //  so that it is no longer usable.
    va_end(args);

    return count;
}
