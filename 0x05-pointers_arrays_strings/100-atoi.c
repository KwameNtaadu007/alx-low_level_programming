#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int number = 0;
	int sign = 1;
	int overflow = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			unsigned int digit = *s - '0';

			if (number > UINT_MAX / 10 ||
				(number == UINT_MAX / 10 && digit > UINT_MAX % 10))
				overflow = 1;
			number = number * 10 + digit;
		}
		else if (number > 0)
			break;
		s++;
	}
	if (overflow)
		return (sign == 1 ? INT_MAX : INT_MIN);
	else
		return (number * sign);
}

