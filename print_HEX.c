#include "main.h"

/**
 * print_HEX - a function that prints UPPER hexadecimal
 * @number: unsigned int number
 * Return: characters_printed
 */

int print_HEX(unsigned int number)
{
	int characters_printed = 0;

	char heXbuffer[] = "0123456789ABCDEF";

	if (number / 16)
		characters_printed += print_HEX(number / 16);

	_putchar(heXbuffer[number % 16]);

	characters_printed++;

	return (characters_printed);
}

