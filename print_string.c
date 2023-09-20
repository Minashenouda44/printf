#include "main.h"

/**
 * print_string - a function that prints a string
 * @arg: argument
 * Return: characters_printed
 */

int print_string(va_list arg)
{
	const char *string;
	int characters_printed = 0;

	string = va_arg(arg, char *);
	if (string == NULL)
		string = "(null)";

	while (*string)
	{
		characters_printed += _putchar(*string);
		string++;
	}

	return (characters_printed);
}
