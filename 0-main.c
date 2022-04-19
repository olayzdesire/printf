#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - prints character
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}
