#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

#include <stdarg.h>

int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(void);
int print_int(int number);

int print_binary(va_list arg);
int print_unsignedint(unsigned int number);
int print_octal(unsigned int number);
int print_hex(unsigned int number);
int print_HEX(unsigned int number);

int print_pointer(unsigned long int number);

int print_reversed(va_list arg);
int print_R(va_list arg);

int _printf(const char *format, ...);


int specifiers(char specifier, va_list arg);

#endif
