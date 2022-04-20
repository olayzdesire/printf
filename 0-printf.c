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
	char *save;

	save = malloc(sizeof(char) * 1024);

	if (save == NULL)
		return (1);

	while (format[indexf] != '\0')
	{
		if (format[indexf] == '%')
		{
			indexf++;
			if (format[indexf + 1] == 'c')
			{
				save[count] = (char)va_arg(ap, int);
				putchar(format[indexf +1]);
				count++;
			}
		}
		indexf++;
		if (format[indexf] == '%')
		{
			if (format[indexf + 1] == 's')
			{
				save[count] = (char)va_arg(ap, int);
			}
		}
		else
		{
			save[count] = format[indexf];
			count++;
		}
		indexf++;
	}
	va_end(ap);
	free(save);
	return (indexf);
}
