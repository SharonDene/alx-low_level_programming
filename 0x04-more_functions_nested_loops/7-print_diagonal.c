#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number of times the character \ should be printed
 *If n is 0 or less, the function should only print a \n
 *Return: 0 if success
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
			_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
