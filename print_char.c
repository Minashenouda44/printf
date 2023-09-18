#include "main.h"

/**
 * print_char - a function that prints char argument
 * @arg: argument
 * Return: 0
 */

int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	return (_putchar(c));
}
