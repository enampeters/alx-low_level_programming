#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the product of two args
 * @argc: the count of arguments
 * @argv: the array of arguments
 *
 * Return: 0 if @argc = 2 else 1.
 */
int main (int argc, char *argv[])
{
	int f;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		f = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", f);
	}
	return (0);
}
