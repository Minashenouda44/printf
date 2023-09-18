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

int print_binary(va_list arg);
int print_unsignedint(va_list arg);
int print_octal(va_list arg);

int _printf(const char *format, ...);

#endif
