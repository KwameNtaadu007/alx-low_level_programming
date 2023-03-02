#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *d = dest;
	const char *s = src;

	while (*d != '\0')
		d++;

	while ((*d = *s) != '\0')
	{
		d++;
		s++;
	}

	return (dest);
}

