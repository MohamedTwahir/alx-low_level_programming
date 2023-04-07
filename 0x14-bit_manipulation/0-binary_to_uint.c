#include "main.h"
/**
 * convertBinaryToUnsignedInt - converts a binay number to unsigned int
 * @binaryStr: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int convertBinaryToUnsignedInt(const char *binaryStr)
{
	int i;
	unsigned int decimalVal = 0;

	if (!binaryStr)
		return (0);

	for (i = 0; binaryStr[i]; i++)
	{
		if (binaryStr[i] < '0' || binaryStr[i] > '1')
			return (0);
		decimalVal = 2 * decimalVal + (binaryStr[i] - '0');
	}

	return (decimalVal);
}
