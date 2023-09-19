#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_R - Printting a R
 * @arg: argument
 * Return: characters printed
 */
int print_R(va_list arg)
{
	char *str = va_arg(arg, char *);
	int r, len = strlen(str), o = 0;
	char *R = malloc(sizeof(char) * (len + 1));

	if (!R)
	return (0);

	for (r = 0; r < len; r++)
	{
	if ((str[r] >= 'A' && str[r] <= 'M') || (str[r] >= 'a' && str[r] <= 'm'))
	R[r] = str[r] + 13;
	else if ((str[r] >= 'N' && str[r] <= 'Z') || (str[r] >= 'n' && str[r] <= 'z'))
	R[r] = str[r] - 13;
	else
	R[r] = str[r];
}

	R[len] = '\0';

	o += write(1, R, len);

	free(R);
	return (o);
}
