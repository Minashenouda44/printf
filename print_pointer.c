#include "main.h"

/**
 * print_pointer - a function that prints a pointer
 * @number: unsigned int number
 * Return: characters printed
 */

int print_pointer(unsigned int number)
{
	int characters_printed = 0;

	_putchar('0');
	characters_printed++;

	_putchar('x');
	characters_printed++;

	characters_printed += print_hex(number);

	return (characters_printed);
}


