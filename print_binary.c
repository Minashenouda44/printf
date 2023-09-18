#include "main.h"

/**
 * print_binary - a function that prints a binary number
 * @arg: argument
 * Return: characters printed
 */

int print_binary(va_list arg)
{
	unsigned int i = 0;
	unsigned int sum = 0;
	unsigned int number;
	unsigned int binary[32];
	unsigned int max_value;
	int characters_printed = 0;

	number = va_arg(arg, unsigned int);

	max_value = 2147483648;
	binary[0] = number / max_value;

	for (i = 1 ; i < 32 ; i++)
	{
		max_value /= 2;
		binary[i] = (number / max_value) % 2;
	}
	for (i = 0 ; i < 32 ; i++)
	{
		sum += binary[i];
		if (sum || i == 31)
		{
			characters_printed += _putchar('0' + binary[i]);
		}
	}
	return (characters_printed);
}
