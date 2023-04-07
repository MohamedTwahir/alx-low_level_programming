#include "main.h"

/**
 * convertBinaryToUnsignedInt - converts a binay number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int convertBinaryToUnsignedInt(const char *b)
{
	int i;
	unsigned int decimalVal = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimalVal = 2 * decimalVal + (b[i] - '0');
	}

	return (decimalVal);
}
