#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid passwords for the program
 *
 * Return: Always 0.
 */

int main(void)
{
	int a, i;
	int n;
	
	srand(time(0));
	n = (rand() % 33);

	if (n < 8)
		n += 8;

	for (a = 1; a < n; a++)
	{
		i = (rand() % 127);

		if (i < 32)
			i += 32;

		printf("%c", i);
	}
	printf("\n");
	return (0);
}
