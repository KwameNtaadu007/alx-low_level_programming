#include "main.h"

/**
 * 
 * get_bit - returns the value of a bit at a given index
 * @n: interger input
 * @index: index of the bit.
 *
 * Return:bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= sizeof(n) * 8)
	{
        	return -1; /* index out of bounds*/
    	}
    	return (n >> index) & 1;
}
