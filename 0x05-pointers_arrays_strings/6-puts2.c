#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 */

void puts2(char *str)
{
	int len = 0;
	int index =0;

	while (str[index++])
	{
		len++;

		if (len % 2 == 0)
			_putchar(str[index]);
	}
	_putchar('\n');
}
