#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _putchar - write the char c to stdout.
 * @c: the character that is to be printed to stdout.
 * return: 1 on success,
 * 	  -1 on error and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
