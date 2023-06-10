#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: number of argumnets
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main (int argc, char *argv[])
{
	if (argv[0] != NULL)
		printf("%d\n", argc -1);

	return (0);
}
