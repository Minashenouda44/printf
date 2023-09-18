#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: const char formated input
 * Return: characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int characters_printed = 0;

	va_list(arg);
	if (format == NULL)
		return (-1);
	va_start(arg, format);
	for (i = 0 ; format && format[i] != '\0' ; i++)
	{
		if (format[i] != '%')
		{
			characters_printed += _putchar(format[i]);
		}
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				characters_printed += print_char(arg);
			else if (format[i] == 's')
				characters_printed += print_string(arg);
			else if (format[i] == '%')
				characters_printed += print_percent();
			else if (format[i] == 'd')
				characters_printed += print_decimal(arg);
			else if (format[i] == 'i')
				characters_printed += print_decimal(arg);
			else if (format[i] == 'b')
				characters_printed += print_binary(arg);
			else if (format[i] == 'u')
				characters_printed += print_unsignedint(arg);
			else
			{
				characters_printed += _putchar('%');
				characters_printed += _putchar(format[i]);
			}
		}
	}
	va_end(arg);
	return (characters_printed);
}
