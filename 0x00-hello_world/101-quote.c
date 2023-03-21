#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always 0 (Success)
 * A print without man (3) printf and puts function test
 */
int main(void)
{
	/**
	 * Getting stout
	 */
	
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(str, sizeof(str), 2, fp);

	return (1);
}

