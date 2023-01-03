#include "main.h"
/**
 * print_chessboard -chessboard
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int a, b;

	for (a = 0; a <= 7; a++)
	{
		for (b = 0; b <= 7; b++)
		{
			_putchar(c[a][b]);
		}
		_putchar(10);
	}
}
