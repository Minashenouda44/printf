#include "main.h"
#include <stdlib.h>
#include <string.h>

char *int_to_str(int num);

int _printf(const char *format, ...)
{
	unsigned int r = 0, o = 0;
	va_list args;

	va_start(args, format);
	while (format && format[r])
{
	if (format[r] == '%' && format[r + 1] != '\0')
{
	r++;
	switch (format[r])
{
	case 'c':
{
	char c = (char) va_arg(args, int);
	o += write(1, &c, 1);
	break;
}
	case 's':
{
	char *s = va_arg(args, char *);
	o += write(1, s, strlen(s));
	break;
}
	case '%':
	o += write(1, &format[r], 1);
	break;
	default:
	o += write(1, &format[r - 1], 1);
	o += write(1, &format[r], 1);
	break;
}
}
	else
{
	o += write(1, &format[r], 1);
}
	r++;
}

	va_end(args);
	return (o);
}

char *int_to_str(int z)
{
	char *str;
	int len = 0, tmp = z;

	if (z <= 0)
	len++, tmp = -tmp;
	
	while (tmp > 0)
	len++, tmp /= 10;

	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
	return (NULL);

	str[len] = '\0';

	if (z == 0)
	str[0] = '0';
	else
{
	if (z < 0)
	str[0] = '-', z = -z;

	while (z > 0)
	str[--len] = (z % 10) + '0', z /= 10;
}
	return (str);
}
