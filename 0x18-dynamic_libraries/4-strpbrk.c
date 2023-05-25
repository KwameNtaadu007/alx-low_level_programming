#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * s of any of the bytes in the string
 * @s: string to search in
 * @accept: The string of bytes to search for.
 * Return: A pointer to the byte in s that matches one
 * of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
				return (s);
		}
		s++;
	}
	return ('\0');
}
