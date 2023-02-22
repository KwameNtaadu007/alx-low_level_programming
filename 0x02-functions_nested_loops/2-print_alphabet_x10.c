#include "main.h"


/**
 * print_alphabet_x10 - Prints th  alphabets 10 times in lowercase
 * @C: The character printed in every loop
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
