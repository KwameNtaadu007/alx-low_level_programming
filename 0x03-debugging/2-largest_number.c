#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: 1st number
 * @b: 2nd number
 * @c: 3rd number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	largest = (a > b) ? a : b;
	largest = (largest > c) ? largest : c;

	return (largest);
}
