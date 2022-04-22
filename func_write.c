#include <stdio.h>
#include <stdlib.h>

/**
 * write - writes c to stdout.
 * @c: char to be written to stdout.
 * return: 0 on success, -1 on error.
 */

int _write(char c)
{
	_write(1, &c, 1);
}
