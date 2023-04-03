#include "main.h"
/**
 * print_chessboard - print a checkboard
 * @a: rows of the chess board
 *
 * Return: Returns void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	char *piece;

	for (i = 0; i < 8; i++)
	{
		piece = *(a + i);
		for (j = 0; j < 8; j++)
			_putchar(*(piece + j));
		_putchar('\n');
	}

}
