#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (n > 5)
		printf("last digit of %i is %i and greater than 5\n", n, last);
	else if (n == 0)
		printf("last digit of %i is %i is 0\n", n, last);
	else if (n < 6)
		printf("last digit of %i is %i and is less than 6 and is not 0\n", n, last);
	return (0);

}
