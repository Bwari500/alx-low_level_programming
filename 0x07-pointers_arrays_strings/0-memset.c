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
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
