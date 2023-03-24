#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int count = 1;

	while (count < 11)
	{
		int n;

		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');

		count++;
	}
}
