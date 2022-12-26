#include "main.h"
#include <stdio>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements of the array of integers
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
