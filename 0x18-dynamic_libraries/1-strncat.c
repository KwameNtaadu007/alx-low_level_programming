#include "main.h"

/**
 * _strncat - Concatenates two strings but adds a specified number of bytes
 * @dest: The string to be appended upon
 * @src: The string to be appended to dest
 * @n: The maximum number of bytes to be appended
 * Return: Pointer to the resulting string (dest)
*/

char *_strncat(char *dest, const char *src, int n)
{
	int dest_len = 0;
	int index = 0;

	/* Find the length of dest */
	while (dest[dest_len])
		dest_len++;

	/* Append src to dest, up to n bytes */
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	dest[dest_len] = '\0'; /* Add null terminator at the end */

	return (dest);
}
