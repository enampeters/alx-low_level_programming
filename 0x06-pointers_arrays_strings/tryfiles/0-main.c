#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("done s1\n");
	printf("%s", s2);
	printf("done s2\n");
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("done s1\n");
	printf("%s", s2);
	printf("done s2\n");
	printf("%s", ptr);
	printf("done ptr\n");
	return (0);
}
