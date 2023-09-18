#include "main.h"

/**
 * specifiers - a function that handle a given specifier
 * @specifier: specifiers
 * @arg: argument
 * Return: characters printed
 */

int specifiers(char specifier, va_list arg)
{
	if (specifier == 'c')
		return (print_char(arg));
	else if (specifier == 's')
		return (print_string(arg));
	else if (specifier == '%')
		return (print_percent());
	else if (specifier == 'd' || specifier == 'i')
		return (print_decimal(arg));
	else if (specifier == 'b')
		return (print_binary(arg));
	else if (specifier == 'u')
		return (print_unsignedint(arg));

	return (0);
}
