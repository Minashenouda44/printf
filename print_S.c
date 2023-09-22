#include "main.h"

/**
 * print_S - a function that prints the Non printable characters
 * @arg: argument
 * Return: characters printed
 */

int print_S(va_list arg)
{
	char *string;
	int characters_printed = 0;

	string = va_arg(arg, char *);

	if (string == NULL)
		string = "(null)";

	while (*string)
	{
		if (*string < 32 || *string >= 127)
		{
			characters_printed += _putchar('\\');
			characters_printed += _putchar('x');
			characters_printed += print_HEX(*string);
		}
		else
			characters_printed += _putchar(*string);
		string++;
	}

	return (characters_printed);
}

