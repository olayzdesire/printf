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

	dest = malloc(sizeof(char) * (indexd));
	if (dest == 0)
		return (1);

	va_start(ap, format);
	while (format[indexf] != '\0')
	{
		indexf++;
		if (format[indexf] == '%' && format[indexf + 1] == 'c')
		{
			dest[indexd] = (char)va_arg(ap, int);
			indexd++;
			indexf++;
		if (format[indexf] == '%')
		{
			indexd += _putchar(format[i]);
			indexd++;
			indexf++;
			if (format[indexf + 1] == 's')
			{
				indexd += _putchar(format[i + 1]);
			}
		else
		{
			return (-1);
		}
		va_end(ap);
		return (indexd);
	}
}
