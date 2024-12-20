#ifndef MYHEADER_H
#define MYHEADER_H

// Function to print a single character
void ft_putchar(char c);

// Function to print an integer
void ft_putnbr(int n);

// Function to print a formatted string
int ft_printf(const char *format, ...);

//function to print a char
void ft_putchar(char c);

//function to print an unsigned int
void ft_putnbr_unsigned(unsigned int n);

//function to print a hexadecimal
void ft_putnbr_base(int num, int base, int uppercase);

//function to print a string
void ft_putstr(char *s); 

// Helper function to calculate the length of an integer when printed
int ft_intlen(int num);

// Helper function to calculate the length of an unsigned integer when printed
int ft_uintlen(unsigned int num);

// Helper function to calculate the length of a string
int ft_strlen(char *s);

//Helper function to calculate the length of a number in a specific base
int ft_base_len(unsigned long num, int base)


#endif