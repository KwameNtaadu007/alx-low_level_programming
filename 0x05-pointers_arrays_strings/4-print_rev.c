#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int i;
	int str = strlen(s);

	for (i = str - 1; i >= 0; i--)
		_putchar(s[i]);

	 _putchar('\n');
}
