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
			characters_printed += _putchar(format[i]);
		else if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				characters_printed += print_char(arg);
			else if (format[i + 1] == 's')
				characters_printed += print_string(arg);
			else if (format[i + 1] == '%')
				characters_printed += print_percent();
			else if (format[i + 1] == 'd')
				characters_printed += print_decimal(arg);
			else if (format[i + 1] == 'i')
				characters_printed += print_decimal(arg);
			else if (format[i + 1] == 'b')
				characters_printed += print_binary(arg);
			else if (format[i + 1] == 'u')
				characters_printed += print_unsignedint(arg);
			else
			{
				characters_printed += _putchar('%');
				characters_printed += _putchar(format[i + 1]);
			}
		}
		else if (format[i] == '\\')
		{
			if (format[i + 1] == 'n')
				characters_printed += _putchar('\n');
			else if (format[i + 1] == 't')
				characters_printed += _putchar('\t');
			else if (format[i + 1] == '\\')
				characters_printed += _putchar('\\');
			else
			{
				characters_printed += _putchar(format[i + 1]);
			}
		}
		i++;
	}
	va_end(arg);
	return (characters_printed);
}
