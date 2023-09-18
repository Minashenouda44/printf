#include "main.h"

/**
 * _putchar - function print character
 * @c: character
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
