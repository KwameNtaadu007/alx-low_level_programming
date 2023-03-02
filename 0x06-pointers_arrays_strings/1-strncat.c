#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;


	while (dest[i] != '\0')
		i++;

	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);

}
