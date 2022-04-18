#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Produces output.
 * @format: A character string.
 * Return: Return the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list ap;

	indexf = 0;
	indexd = 0;
	char *dest;

	dest = malloc(sizeof(char) * (indexd + 1));
	if (dest == 0)
		return (1);

	va_start(ap, format);
	for (; format[indexf] != '\0'; f++)
	{
		if (format[indexf] == '%' && format[indexf + 1] == 'c')
		{
			dest[indexd] = (char)va_arg(ap, int);
			indexd++;
			indexf++;
		if (format[indexf] == '%' && format[indexf + 1] == 's')
		{
			dest[indexd] = (char)va_arg(ap, int);
			indexd++;
		}
		else
		{
			return (-1);
		}
		return (indexd);
	}
}
