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
	len;
	char *dest;
	
	while (len < dest)
	{
		len++;
	dest = malloc(sizeof(char) * (len));
	if (dest == 0)
		return (1);

		va_start(ap, format);
		while (format[indexf] != '\0')
		{
			indexf++
			if (format[indexf] == '%' && format[indexf + 1] == 'c')
			{
				dest[indexd] = va_arg(ap, int);
				indexd += _putchar(format[indexf]);
				indexd++;
				indexf++;
				if (format[indexf + 1] == 'c')
				{
					dest[indexd] = va_arg(ap, char);
					indexd += _putchar(format[indexf]);
					indexd++;
					indexf++;
					if (format[indexf] == '%')
					{
						dest[indexd] = va_arg(ap, int)
						indexd += _putchar(format[indexf]);
						indexd++;
						indexf++;
						if (format[indexf + 1] == 's')
						{
							dest[indexd] = va_arg(ap, char);
							indexd += _putchar(format[indexf + 1]);
						}
						else
						{
							return (-1);
						}
						va_end(ap);
						return (indexd);
					}
				}
			}
		}
	}
}	
	
	
