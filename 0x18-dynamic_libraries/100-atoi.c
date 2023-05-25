#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted
 * Description: The number in the string can be preceded by an infinite
 * number of characters.
 * You need to take into account all -/+ signs before the number.
 * If there are no numbers in the string, return 0.
 * No need to check for overflow.
 * Not allowed to hard-code special values.
 * Return: The first integer found in the string
 */

int _atoi(const char *s)
{
	int i;
	int num = 0;
	int sign = 1;
	int digit_found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
			digit_found = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}

	return (num * sign);
}

