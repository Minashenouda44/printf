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
int escape_cases(const char *format, unsigned int *r, va_list args);
int _printf(const char *format, ...);
int print_binary(va_list arg);
int print_hex(va_list arg);
int print_hex_upper(va_list arg);
int print_reversed(va_list arg);
int print_R(va_list arg);
#endif
