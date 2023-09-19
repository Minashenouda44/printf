#include "main.h"

/**
 * specifiers - a function that handle a given specifier
 * @specifier: specifiers
 * @arg: argument
 * Return: characters printed
 */

int specifiers(char specifier, va_list arg)
{
	int characters_printed = 0;

	if (specifier == 'c')
		characters_printed += print_char(arg);
	else if (specifier == 's')
		characters_printed += print_string(arg);
	else if (specifier == '%')
		characters_printed += print_percent();
	else if (specifier == 'd' || specifier == 'i')
		characters_printed += print_int(va_arg(arg, int));
	else if (specifier == 'b')
		characters_printed += print_binary(arg);
	else if (specifier == 'u')
		characters_printed += print_unsignedint(va_arg(arg, unsigned int));
	else if (specifier == 'o')
		characters_printed += print_octal(va_arg(arg, unsigned int));
	else if (specifier == 'x')
		characters_printed += print_hex(va_arg(arg, unsigned int));
	else if (specifier == 'X')
		characters_printed += print_HEX(va_arg(arg, unsigned int));
	else if (specifier == 'p')
		characters_printed += print_pointer(va_arg(arg, unsigned long int));
	else if (specifier == 'r')
		characters_printed += print_reversed(arg);
	else if (specifier == 'R')
		characters_printed += print_R(arg);
	else
	{
		characters_printed += _putchar('%');
		characters_printed += _putchar(specifier);
	}

	return (characters_printed);
}
