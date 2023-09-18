#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

#include <stdarg.h>

int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(void);
int print_decimal(va_list arg);
int print_char(int c); 
int print_string(char *s); 
int print_decimal(int n);
int print_binary(int n); 
int print_unsignedint(unsigned int n);
int print_binary(va_list arg);
int print_unsignedint(va_list arg);
int print_octal(va_list arg);
int _printf(const char *format, ...);

#endif
