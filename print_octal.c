#include "main.h"

/**
 * print_octal - a function that print an octal number
 * @arg: argument
 * Return: character printed
 */

int print_octal(va_list arg)
{
	unsigned int number;
	int digit = 0;
	int characters_printed = 0;
	unsigned int buffer[20];
	int i = 0;
	int j = 0;

	number = va_arg(arg, unsigned int);

	if (number == 0)
		characters_printed += _putchar('0');
	else
	{
		while (number > 0)
		{
			digit = number % 8;
			buffer[i++] = digit;
			number /= 8;
		}
		for (j = i - 1 ; j >= 0 ; j--)
			characters_printed += _putchar('0' + buffer[j]);
	}
	return (characters_printed);
}
