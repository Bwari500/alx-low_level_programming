#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: character to print
 *
 * Return: success 1
 * on error, -1 is returned and error is set appropritely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
