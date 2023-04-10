#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0
 *@n:pointer to integer
 *@index: index of the bit
 *
 * Return: 1 if it worked, -1 if it didn't
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /*index out of bounds*/
	}
	*n &= ~(1UL << index);
	return (1);
}
