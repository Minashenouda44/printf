#include "main.h"

/**
 * _printf - a function that produces output
 * @format: const char formated input
 * Return: characters printed
 */

int _printf(const char *format, ...)
{
	int r = 0;
	int characters_printed = 0;

	va_list(arg);
	if (format == NULL)
	return (-1);
	va_start(arg, format);

	for (r = 0 ; format && format[r] != '\0' ; r++)
{
	if (format[r] != '%')
	characters_printed += _putchar(format[r]);

	else if (format[r + 1] != '\0')
{
	r++;
	characters_printed += specifiers(format[r], arg);
}

	else
{
	characters_printed += _putchar('%');
	characters_printed += _putchar(format[r]);
}
}
	va_end(arg);
	return (characters_printed);
}
