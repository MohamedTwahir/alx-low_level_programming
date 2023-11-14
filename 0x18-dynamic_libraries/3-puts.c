#include "main.h"

/**
 * _puts - swaps two integer values
 * @str: The pointer value one
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
