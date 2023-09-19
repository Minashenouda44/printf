#include "main.h"

/**
 * print_octal - a function that print an octal number
 * @number: unsigned int number
 * Return: character printed
 */

int print_octal(unsigned int number)
{
	int characters_printed = 0;

	if (number / 8)
		characters_printed += print_octal(number / 8);

	_putchar(number % 8 + '0');

	characters_printed++;

	return (characters_printed);
}
