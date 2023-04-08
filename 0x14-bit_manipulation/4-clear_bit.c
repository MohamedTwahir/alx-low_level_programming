#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to that number to change
 * @index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 if success, -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{ 
	unsigned long int mask;
	mask = 1;
	mask = mask << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) &1) == 1) /*check if 1 is correctly placed*/
		*n = mask ^ *n;

	return (1);
}
