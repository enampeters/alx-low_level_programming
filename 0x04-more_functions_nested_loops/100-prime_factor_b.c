#include <stdio.h>

/**
 * main - finds the highest prime factor of 612852475143
 *
 * Return: always 0
 */

int main(void)
{
	long i, k, fact, hpf, n=612852475143;
	int count;

	printf("Start for i loop\n");
	for (i = 2; i < n; i++)
	{

		if (n % i == 0)
		{
			fact = n / i;
			printf("Got a factor: %ld with %ld\n", fact, i);

			printf("Checking prime factor status of fact\n");

			count = 0;

			for (k = 2; k < fact; k++)
			{

				if (fact % k == 0)
				{
					count++;
					printf("%ld has %ld as a factor so it isnt prime\n", fact, k);
					break;
				}
			}
			if (count == 0)
			{
				printf("Count is still zero. Got a prime status for fact\n");
				hpf = fact;
				break;
			}
			else
			{
				printf("%ld has %d factors so it isnt a prime\n", fact, count);
				continue;
			}
		}
		n = fact;
		if (n < i)
			break;
	}

	printf("%ld\n", hpf);

	return (0);
}
