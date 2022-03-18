#include "main.h"

/**
 *print_square - prints a square
 *@size: size of the square
 *f size is 0 or less, the function should print only a new line
 *Return: 0 if success
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
