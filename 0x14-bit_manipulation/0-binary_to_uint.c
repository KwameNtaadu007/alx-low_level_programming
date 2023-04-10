#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unsigned_int;
	int lengt, base_two;

	if (!b)
	{
		return (0);
	}

	unsigned_int = 0;

	for (lengt = 0; b[lengt] != '\0'; lengt++)
		;

	for (lengt--, base_two = 1; lengt >= 0; lengt--, base_two *= 2)
	{
		if (b[lengt] != '0' && b[lengt] != '1')
		{
			return (0);
		}

		if (b[lengt] & 1)
		{
			unsigned_int += base_two;
		}
	}

	return (unsigned_int);
}
