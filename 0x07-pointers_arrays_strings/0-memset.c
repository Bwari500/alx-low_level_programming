#include "main.h"

/**
 * _memset - fill the first set of the memory area
 * @s: a pointer to the memory
 * @b:the character to fill the memory
 * @n: the number of bytes
 * description _memset: over there
 * Return: a pointer to a filled area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
