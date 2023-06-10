#include <stdio.h>

/**
 * main - prints all arguments to the function
 * @argc: the count of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0
 */

int main (int argc, char *argv[])
{
	int i;

	if (argc > 0)
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	return (0);
}
