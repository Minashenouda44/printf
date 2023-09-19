#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_reversed - Printting reversed 
 * @arg: argument.
 * Return:characters printed.
 */
int print_reversed(va_list arg)
{
	char *str = va_arg(arg, char *);
	int len = strlen(str);
	char *reversed = malloc(sizeof(char) * (len + 1));
	int r, o = 0;

	if (!reversed)
	return (0);
    
	for (r = 0; r < len; r++)
	reversed[r] = str[len - r - 1];
    
	reversed[len] = '\0';

	o += write(1, reversed, len);

	free(reversed);
	return (o);
}
