#include "main.h"

/**
 * print_int - a function that print a decimal number
 * @number: int number
 * Return: character printed
 */

int print_int(int number)
{
	int characters_printed = 0;
	long num = number; 
	
	if (number < 0)
	{
		characters_printed += _putchar('-');
		number = -number;
	}


	if (number / 10)
		characters_printed += print_int(number / 10);

	_putchar(number % 10 + '0');
	characters_printed++;

	return (characters_printed);
}
