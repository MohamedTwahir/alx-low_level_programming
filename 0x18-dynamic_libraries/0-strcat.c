#include "main.h"

/**
 * *_strcat - function to concatenate two strings
 * @dest : pointer to append src string
 * @src: pointer of string to append
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int n;
	int len = _strlen(dest);

	for (n = 0; src[n] != '\0'; n++, len++)
	{
		dest[len] = src[n];
	}

	return (dest);
}
