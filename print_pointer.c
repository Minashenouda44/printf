#include "main.h"

/**
 * print_pointer - a function that prints a pointer
 * @arg: unsigned int number
 * Return: characters printed
 */

int print_pointer(va_list arg)
{
	int characters_printed = 0;
	unsigned long int address;

	void *pointer = va_arg(arg, void*);

	address = (unsigned long int)pointer;

	if (pointer == NULL)
	{
		characters_printed += _putchar('(');
		characters_printed += _putchar('n');
		characters_printed += _putchar('i');
		characters_printed += _putchar('l');
		characters_printed += _putchar(')');
	}
	else
	{
		characters_printed += _putchar('0');
		characters_printed += _putchar('x');


		if (address == 0)
			characters_printed += _putchar('0');
		else
			characters_printed += print_hex(address);
	}

	return (characters_printed);
}


