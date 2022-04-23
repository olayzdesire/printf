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

	int indexf = 0, indexs = 0;
	int count = 0;
	char *str;
	char *save;

	save = malloc(sizeof(char) * 1024);
	if (save == NULL)
		return (1);

	while (format[indexf] != '\0')
	{
		if (format[indexf] == '%')
		{
			count = _putchar(format[indexf]);
			indexf++;
			if (format[indexf] == 'c')
			{
				save[count] = va_arg(ap, int);
				count += _putchar(format[indexf]);
				count++;
			}
		
			indexf++;
			if (format[indexf] == '%')
			{
				indexf++;
				if (format[indexf] == 's')
				{
					str = va_arg(ap, char*);
					indexs = 0;
					while (str[indexs])
					{
						save[count] = str[indexs];
						count++;
						indexs++;
						count += _putchar(format[indexf]);
					}
				}
			}
		}
		else
		{
			save[count] = format[indexf];
			count++;
		}
		indexf++;
	}	
	write(1, save, count++);
	va_end(ap);
	free(save);
	return (--count);
}
