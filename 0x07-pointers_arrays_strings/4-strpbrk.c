#include "main.h"


/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			return (s);	
		}
	s++;
	}
	return ('\0');
}
