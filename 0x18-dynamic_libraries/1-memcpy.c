#include "main.h"
#include <stddef.h>
/**
 * _memcpy - copies n bytes from memory area pointed by src
 * to memory area pointed by dest
 * @dest: destination memory pointer
 * @src: source memory pointer
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pDest = (char *)dest;
	char *pSrc = (char *)src;

	if ((pDest != NULL) && (pSrc != NULL))
	{
		while (n)
		{
			*(pDest++) = *(pSrc++);
			--n;
		}
	}
	return (dest);
}
