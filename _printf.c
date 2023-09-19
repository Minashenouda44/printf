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
			characters_printed += _putchar(format[i]);

		else if (format[i + 1] != '\0')
		{
			i++;
			characters_printed += specifiers(format[i], arg);
		}

		else
		{
			characters_printed += _putchar('%');
			characters_printed += _putchar(format[i]);
		}
	}
	va_end(arg);
	return (characters_printed);
}
