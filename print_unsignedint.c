#include "main.h"

/**
 * print_unsignedint - a function that print an unsigned number
 * @number: unsigned int number
 * Return: character printed
 */

int print_unsignedint(unsigned int number)
{
	unsigned int characters_printed = 0;

	if (number / 10)
		characters_printed += print_unsignedint(number / 10);

	_putchar(number % 10 + '0');

	characters_printed++;

	return (characters_printed);
}
