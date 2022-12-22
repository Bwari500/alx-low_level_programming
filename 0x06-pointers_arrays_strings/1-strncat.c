#include "main.h"
#include <stdio.h>

/**
 * _strncat -two strings
 * @dest: string
 * @src: string
 * @n: number of bytes from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_lens++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_lens++] = src[index];


	return (dest);
}
