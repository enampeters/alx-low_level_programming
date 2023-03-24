#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 *	Fizz for multiples of 3
 *	Buzz for multiples of 5
 *	FizzBuzz for both multiples of 3 and 5
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num = 1;

	while (num < 101)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz ");
		else if ((num % 5) == 0)
			printf("Buzz ");
		else if ((num % 3) == 0)
			printf("Fizz ");
		else
			printf("%d ", num);
		num++;
	}
	printf("\n");

	return (0);
}
