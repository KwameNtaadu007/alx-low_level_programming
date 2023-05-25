#include "main.h"

/**
 * _memset - memset fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: Constant byte to fill the memory with
 * @n: Number of bytes to fill
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*p++ = (unsigned char) b;
	return (s);
}
