#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
{
	putcha(c);
	if (c != '9')
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
