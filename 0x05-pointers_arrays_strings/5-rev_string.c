#include "main.h"

/**
 * rev_string - rev a string
 * @s: modified
 * Return: void
 */
void rev_string(char *s)
{
	int lens = 0, index = 0;
	char tmp;

	while (s[index++])
		lens++;
	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}