#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * Main - Entry Point
 * Return: Always 0 (Sucesss)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = last n % 10;
	if (last > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %i is %i and is 0\n", n, last);
	else if (last < 6)
		printf("last digit of %i is %i and is less than and not 0\n", n, last);
	return (0);
}
