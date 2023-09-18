#include "main.h"

/**
 * get_specifier - a function return a specifier
 * @x: specifier
 * Return: specifier
 */

int get_specifier(char specifier, va_list arg)
{
	switch (specifier)
	{
		case 'c':
			characters_printed += print_char(arg);

	return (characters_printed);
}
