#include "main.h"

/**
 * print_decimal - a function that print a decimal number
 * @arg: argument
 * Return: character printed
 */

int print_decimal(va_list arg)
{
	int number;
	int digit = 0;
	int characters_printed = 0;
	int buffer[10];
	int i = 0;
	int j = 0;

	number = va_arg(arg, int);

	if (number < 0)
	{
		characters_printed += _putchar('-');
		number = -number;
	}
	if (number == 0)
		characters_printed += _putchar('0');
	else
	{
		while (number != 0)
		{
			digit = number % 10;
			buffer[i++] = digit;
			number /= 10;
		}
		for (j = i - 1 ; j >= 0 ; j--)
			characters_printed += _putchar('0' + buffer[j]);
	}
	return (characters_printed);
}
