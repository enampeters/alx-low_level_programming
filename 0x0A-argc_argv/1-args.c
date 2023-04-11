#include <stdio.h>

/**
 * main - prints the number of arguments passed to a program
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argv[0] != NULL)
		printf("%d\n", argc - 1);

	return (0);
}
