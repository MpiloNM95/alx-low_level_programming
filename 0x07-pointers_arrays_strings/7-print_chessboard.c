#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int d, e;

	for (d = 0; d < 8; d++)
	{
		for (e = 0; e < 8; e++)
		{
			_putchar(a[d][e]);
		}

		_putchar('\n');
	}
}
