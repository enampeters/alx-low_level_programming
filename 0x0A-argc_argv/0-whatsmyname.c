#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of arguments supplied
 * @argv: the array of arguments supplied to the function
 * Return: Always 0
 */

int main (int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
