#include "main.h"

/**
 * *_strchr - it locates a character in a string
 * @s: char to fill
 * @c: received int limit
 * Return: a pointer to the first coccurance of character c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	return ('\0');
}
