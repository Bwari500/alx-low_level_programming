#include <stdio.h>

/*
 * swap_int - swap the value of the intergers
 * @a: the first interger to be swapped
 * @b:the second interger to be swapped
 *
 * return: nothing
 */

void swap_int(int *a, int *b);
/* the value tat swaps the value of two intergers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
