#include "main.h"

/**
 * get_endianness - checks if its little or big endiannes
 * Return: 0 for big, 1 for little
 */


int get_endianness(void)
{
	unsigned int i = 1;

	return (*((char *)&i) == 1);
}
