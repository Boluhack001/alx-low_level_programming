#include "main.h"
/**
 * print_chessboard - Fubction that brint a chess
 * @a: Array input to print
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_puchar(a[i][j]);
		_putchar('\n');
	}
}