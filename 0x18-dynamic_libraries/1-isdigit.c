#include "main.h"

/**
 * _isdigit -  checks for digits in entry
 * @c: receive character
 *Return: 0 || 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
