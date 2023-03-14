#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @st1: string 1
 * @st2: string 2
 *
 * Return: pointer to new string
 */
char *str_concat(char *st1, char *st2)
{
	char *new;
	int st1_len, st2_len, i, j;

	st1 == NULL ? st1 = "" : st1;
	st2 == NULL ? st2 = "" : st2;

	for (st1_len = 0; st1[st1_len]; st1_len++)
		;
	for (st2_len = 0; st2[st2_len]; st2_len++)
		;

	new = malloc(sizeof(char) * (st1_len + st2_len + 1));
	if (!new)
		return (NULL);

	for (i = 0; i < st1_len; i++)
		new[i] = st1[i];

	for (j = 0; j < st2_len; j++)
		new[i + j] = st2[j];

	new[i + j] = '\0';

	return (new);
}
