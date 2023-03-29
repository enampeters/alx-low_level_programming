#include "main.h"
/**
 * puts_half - prints the second half of a string
 *@str: string to be used
 */

void puts_half(char *str)
{
	int index = 0, len = 0, n;

	while (str[index++])
		len++;

	if (len % 2 == 0)
		n = (len / 2);
	else
		n = ((len - 1) / 2);

	for (index = n +1; index < len; index++)
		_putchar(str[index]);
	_putchar('\n');
}
