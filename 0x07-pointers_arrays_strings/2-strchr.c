#include "main.h"

/**
 *_strchr - locates a character in a string
 *@c: charcater to locate
 *@s: string
 *Rreturn: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + 1) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
