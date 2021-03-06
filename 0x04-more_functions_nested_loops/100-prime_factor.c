#include <stdio.h>

/**
 *main - finds and prints the largest prime factor of the number 612852475143
 *
 *Return: 0 if success
 */

int main(void)
{
	long int n, j;

	n = 612852475143;

	for (j = 2; j <= n; j++)
	{
		if (n % j == 0)
		{
			n /= j;
			j--;
		}
	}
	printf("%ld\n", j);
	return (0);
}
