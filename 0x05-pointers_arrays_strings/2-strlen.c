#include <stdio.h>

/**
 *_strlen - Return the length of a string
 *@ste:the string to get the length
 *Return: the leghth of @str.
 */
size_t _strlen(const char *str)
/** *str being the lenght */

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
