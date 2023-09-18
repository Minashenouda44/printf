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
			characters_printed += get_specifier(format[i]);
		}
		i++;
	}
	va_end(arg);
	return (characters_printed);
}
