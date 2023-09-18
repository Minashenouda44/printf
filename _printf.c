#include "main.h"
#include <stdarg.h>

/**
 * get_specifier -  the specifiers characters & the output's function
 * @format: The format string
 *
 * Return: The specifier character or 0 if not found
 */
int get_specifier(const char *format)
{
	int r = 0;
	char specifier;

	while (format[r])
{
	if (format[r] == '%')
{
	r++;
	while (format[r])
{
	if (format[r] == 'c' || format[r] == 's' ||
	format[r] == '%' || format[r] == 'd' ||
 	format[r] == 'i' || format[r] == 'b' ||
	format[r] == 'u')
{
	return (format[r]);
}
	r++;
}
}
	r++;
}
	return (0);
}

int _printf(const char *format, ...)
{
	int r = 0;
	int characters_printed = 0;
	va_list arg;

	if (format == 0)
	return (-1);
    
	va_start(arg, format);

	while (format && format[r])
{
	if (format[r] != '%')
{
	characters_printed += _putchar(format[r]);
}
        else if (format[r] == '%')
{
	r++;
	char specifier = get_specifier(format + r);
            
	switch (specifier)
{
	case 'c':
	characters_printed += print_char(va_arg(arg, int));
	break;
	case 's':
	characters_printed += print_string(va_arg(arg, char *));
	break;
	case '%':
	characters_printed += print_percent();
	break;
	case 'd':
	case 'i':
	characters_printed += print_decimal(va_arg(arg, int));
	break;
	case 'b':
	characters_printed += print_binary(va_arg(arg, int));
	break;
	case 'u':
	characters_printed += print_unsignedint(va_arg(arg, unsigned int));
	break;
	default:
	break;
}
	r += 1;
}
	r++;
}
    
	va_end(arg);
	return (characters_printed);
}
