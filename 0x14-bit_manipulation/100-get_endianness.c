#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int uint;
	char *cha;

	uint = 1;
	cha = (char *) &uint;

	return ((int)*cha);
}
