#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main-output for if condition
 *
 *Return: Always 0 (Sucess)
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	n = 0;

	printf("%d is zero\n",n);

	return (0);
}
