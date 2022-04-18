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
	int indexd = 0;

	int *dest = &indexd;

	if (dest == NULL)
		return (1);

	va_start(ap, format);
	while (format[indexf] != '\0')
	{
		if (format[indexf] == '%')
		{
			indexf++;
			if (format[indexf] == 'c')
			{
				dest[indexd] = va_arg(ap, int);
				indexd++;
				indexf++;
				if (format[indexf] == '%')
				{
					indexf++;
					if (format[indexf] == 's')
					dest[indexd] = va_arg(ap, int);

					else
						return (-1);
				}
			}
		}
	}
	va_end(ap);
	return (indexd);
}

