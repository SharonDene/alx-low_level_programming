#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: memory area 2
 *@src: memory area 1
 *@n: bytes
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
