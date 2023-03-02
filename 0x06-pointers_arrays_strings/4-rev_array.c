#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	while (i < n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
	}
}
