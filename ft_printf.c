#include <stdarg.h>


//A variadic function is a function which accepts a variable 
//number of arguments. It is characterized by the "..." in a function.
int	ft_printf(const char *format, ...){

//object type suitable for holding the information needed by 
//the macros va_start, va_copy, va_arg, and va_end
    va_list    args;

//The macro va_start function will somehow initialize everything, 
//before we start moving through our variable argument list (va_list).
    va_start(args, format);

//This macro allows access to the arguments of the variadic function. 
   
    va_arg(args, char *);
//Each time va_arg is called, you move to the next argument. 
    va_arg(args, int);







//Once finished -> clean up the object initialized by calling va_start.
//va_end can modify the object, which is called "args" 
// so that it is no longer usable. 
    va_end(args);
}