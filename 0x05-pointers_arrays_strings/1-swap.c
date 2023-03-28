#include "main.h"
/**
 * swap_int - swaps the value of two integers using pointers
 *@a: first int in the swap
 *@b: second int to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
