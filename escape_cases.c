#include "main.h"

/**
 * escape_cases -  escape cases for the _printf function.
 * @format: The format 
 * @i: The current index 
 * @args: The arguments
 *
 * Return: characters printed.
 */
int handle_escape_cases(const char *format, unsigned int *r, va_list args)
{
	unsigned int count = 0;

	if (format[*r + 1] == 'c')
{
	char g = (char)va_arg(args, int);
	count += write(1, &c, 1);
	(*r)++;

}
	else if (format[*r + 1] == 's')
{
	char *s = va_arg(args, char *);
	count += write(1, s, strlen(s));
	(*r)++;

}
	else if (format[*r + 1] == '%')
{
	count += write(1, &format[*r], 1);
	(*r)++;
}
	else if (format[*r + 1] != '\0')
{
	count += write(1, &format[*r], 2);
        (*r)++;

}
	else
{
	count += write(1, &format[*r], 1);
}

	return (count);
}
