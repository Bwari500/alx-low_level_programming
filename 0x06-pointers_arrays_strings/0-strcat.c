#include "main.h"
#include <stdio.h>

/**
 * strcat - two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting dest
 */

char *strcat(char *dest, const char *src)

{
	int index = 0, dest_len = 0;

	while (dest[index++])

		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
