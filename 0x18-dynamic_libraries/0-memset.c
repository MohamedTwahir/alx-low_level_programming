#include "main.h"

/**
 **_memset - function filling the memory with a constant
 *@s:received a char
 *@b:a constant char
 *@n:received int
 *Return: a pointer to the memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
