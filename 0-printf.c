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

	int indexf = 0;
	int count = 0;

	va_start(ap, format);
	while (format[indexf] != '\0')
	{
		if (format[indexf] == '%')
		{
			indexf++;
			if (format[indexf] == 'c')
			{
				va_arg(ap, int);
				count = _putchar(format[indexf]);
				count++;
			}
			else if (format[indexf] == '%')
			{
				count += _putchar(format[indexf]);
				count++;
			}
			else if (format[indexf] == 's')
			{
				va_arg(ap, int);
				count = _putchar(format[indexf]);
			}
			else
			{
				count = format[indexf];
				count++;
			}
		}
	}
	va_end(ap);
	return (count);
}

