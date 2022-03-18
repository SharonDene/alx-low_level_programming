#include "main.h"

/**
 *print_line - draws a straight line in the terminal
 *Where n is the number of times the character _ should be printed
 *@n: number of times the character _ should be printed
 *If n is 0 or less, the function should only print \n
 *Return: 0 if success
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if ((i != 0) || (i > 0))
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
