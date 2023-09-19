#include "main.h"

/**
 * print_pointer - a function that prints a pointer
 * @number: unsigned int number
 * Return: characters printed
 */

int print_pointer(unsigned int number)
{
	int characters_printed = 0;

	if (number == 0)
	{
		characters_printed += _putchar('(');
		characters_printed += _putchar('n');
		characters_printed += _putchar('i');
		characters_printed += _putchar('l');
		characters_printed += _putchar(')');

		return (characters_printed);
	}

	_putchar('0');
	characters_printed++;

	_putchar('x');
	characters_printed++;

	characters_printed += print_hex(number);

	return (characters_printed);
}
