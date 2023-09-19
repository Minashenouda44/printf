#include "main.h"

/**
 * print_hex - a function that prints lower hexadecimal
 * @number: unsigned int number
 * Return: characters_printed
 */

int print_hex(unsigned int number)
{
	int characters_printed = 0;

	char hexbuffer[] = "0123456789abcdef";

	if (number / 16)
		characters_printed += print_hex(number / 16);

	_putchar(hexbuffer[number % 16]);

	characters_printed++;

	return (characters_printed);
}

