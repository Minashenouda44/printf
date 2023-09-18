#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

char *int_to_str(int num);

/**
 * _printf - printf functions and spcifiers
 * @format: The format
 * Return: characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int r = 0, count = 0;
	va_list args;

	va_start(args, format);
	while (format && format[r])
{
	if (format[r] == '%' && (format[r + 1] == 'c' || format[r + 1] == 's' ||
	format[r + 1] == 'd'))
{
	if (format[r + 1] == 'c')
{
	char g = (char)va_arg(args, int);
	count += write(1, &c, 1);


	r++;
}
	else if (format[r + 1] == 's')
{
	char *s = va_arg(args, char *);
	count += write(1, s, strlen(s));
	r++;
}
	else if (format[r + 1] == 'd')
{
	int b = va_arg(args, int);
	char *str = int_to_str(b);
	if (str)

{
	count += write(1, str, strlen(str));
	free(str);
}
	r++;
}
}
	else if (format[r] == '%' && format[r + 1] == '%')
{
	count += write(1, &format[r], 1);
	r++;
}
	else
{
	count += write(1, &format[r], 1);
}
	r++;
}
	va_end(args);
	return (count);
}

char *int_to_str(int z)
{
	char *str;
	int tmp = z, len = 0;
	if (z <= 0)

{
	len++;
	tmp = -tmp;
}
	while (tmp > 0)
{
	len++;
	tmp /= 10;
}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
	return (0);
	str[len] = '\0';
	if (z < 0)
{
	str[0] = '-';
	z = -z;
}
	else if (z == 0)
{
	str[0] = '0';
}
	while (z > 0)
{
	str[--len] = (z % 10) + '0';
	z /= 10;
}
	return (str);
}
