#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory storage
 * @src: copied memory
 * @n: number of byte
 *
 * Return: copied memory byte to be changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
