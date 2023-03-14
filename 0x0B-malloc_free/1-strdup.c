#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns reference to a newly allocated space in memory
 * @str: string to be copied
 *
 * Return: pointer to newly initialized memory
 */

char *_strdup(char *str)
{
	char *ref;
	int i, len;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++) /* strlen(str); */
		;

	ref = malloc(sizeof(char) * (len + 1));
	if (!ref)
		return (NULL);

	for (i = 0; i < len; i++) /* strcpy(ref, str); */
		ref[i] = str[i];
	ref[i] = '\0';

	return (ref);

}
