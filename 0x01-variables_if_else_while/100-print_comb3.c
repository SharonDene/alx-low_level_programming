#include <stdio.h>

/**
 *main 0 print all possible combinations of two digits
 *
 *Return: Always 0 (Successe)
 */
int main(void)
{
	int e, j;

	for(e = 48; e < 58; e++)
	{
		for(j = 48; j < 58; j++)
		{
			putchar(e);
			putchar(j);
		}
		if(e == 57 && j == 56)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
