#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Evaluating size of all variable types
 */
int main(void)
{
	/*Declearing variable types*/
	char charType;
	int intType;
	long int lintType;
	long long int llintType;
	float floatType;

	/*Displaying to stout*/
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
