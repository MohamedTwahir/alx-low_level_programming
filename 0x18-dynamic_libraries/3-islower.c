#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lower case
 *
 * Return: 1 on success 0 on fail
 * @c: number for evaluate
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
		return (0);
}
