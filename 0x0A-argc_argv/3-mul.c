#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the products of argv[1] and argv[2]
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 1 if argc < 2 else 0..
 */

int main(int argc, char *argv[])
{
	int d;

	if (argc < 2 || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		d = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", d);

	}
	return (0);
}
