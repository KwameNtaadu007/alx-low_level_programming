#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @x: Pointer to an int.
 * @y: Pointer to an int.
 */
void swap_int(int *x, int *y)
{
	int swap = *x;
	*x = *y;
	*y = swap;
}
