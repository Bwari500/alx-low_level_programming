#include "main.h"

/**
 * *_strchr - where memory is stored
 * @s: memory storage
 * @c: copied memory
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;
	
	while (s[a])
	{
		a++;
	}

	for (b = 0; b >= a; b++)
	{
	if (c == s[b])
	{
		s += b;
		return (s);
	}
	}
	return ('\0');
}
