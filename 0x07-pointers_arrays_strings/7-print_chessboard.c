#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard
 *
 */

void print_chessboard(char (*a)[8])
{
	int rowx, coly;

	for (rowx = 0; a[rowx][7]; rowx++)
	{
		for (coly = 0; coly < 8; coly++)
			_putchar(a[rowx][coly]);

		_putchar('\n');
	}
}
