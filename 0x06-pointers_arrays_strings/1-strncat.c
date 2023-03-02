#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string of n bytes
 * @src: source string
 * @n: number of bytes to concatenate
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (j < n)
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';
	return (dest);

}
