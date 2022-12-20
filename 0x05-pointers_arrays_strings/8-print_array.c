#include "main.h"
#include <stdio.h>

/**
 * print array - print n arrays intergers
 * @a: array of intergers
 * @n:number of elements
 * Return: void
 */

void print_array(int *a, int n)
/** print_array **/

{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(",");
		}
	}
	printf('\n');
}
