#include <stdio.h>
#include <stdint.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
*/
int main(void)
{
	int i;
	unsigned long previous = 1, current = 1, next;

	for (i = 0; i < 50; i++)
	{
		printf("%lu%s", current, i == 49 ? "\n" : ", ");
		next = previous + current;
		previous = current;
		current = next;
	}
	return (0);
}
