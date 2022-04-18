#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * ptintf - Produces output.
 * @format: A character string.
 * Return: Return the number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list ap;
	index f = 0;
	index d = 0;
	char *dest;

	dest = malloc(sizeof(char) * (index d + 1));
	if (dest == 0)
	{
		return(NULL);
	}

	va_start(ap, format);
	for (; format[index f] != '\0'; f++)
	{
		if (format[index f] == '%')
		{
			f++;
		if (format[index f] == 'c')
		{
			dest[index d] = (char)va_arg(ap, int);

			index d++;
		}

		if (format[index f] == 's')
		{
			dest[index d] = (char)va_arg(ap, int);

			index d++;
		}

		else
		{
			return(NULL);
		}

		return(dest);
		}

		dest == '\0';
	}
}
