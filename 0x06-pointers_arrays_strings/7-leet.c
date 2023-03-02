#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	int i, j;
	char *decoding = "aAeEoOtTlL";
	char *encoding = "4433007711";

	i = 0;
	while (s[i])
	{
		for (j = 0; decoding[j]; j++)
			if (s[i] == decoding[j])
				s[i] = encoding[j];
	i++;
	}

	return (s);
}
