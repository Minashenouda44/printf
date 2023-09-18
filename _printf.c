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
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			characters_printed += _putchar(format[i]);
		}
		else if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					characters_printed += print_char(arg);
					break;
				case 's':
					characters_printed += print_string(arg);
					break;
				case '%':
					characters_printed += print_percent();
					break;
				case 'd':
					characters_printed += print_decimal(arg);
					break;
				case 'i':
					characters_printed += print_decimal(arg);
					break;
				case 'b':
					characters_printed += print_binary(arg);
					break;
				case 'u':
					characters_printed += print_unsignedint(arg);
					break;
				default:
					break;
			}
		}
		i++;
	}
	va_end(arg);
	return (characters_printed);
}
