#include"main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 *
 * @n: elements parameter input
 * @a: string parameter input
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int Q;

	for (Q = 0; Q < n; Q++)
	{
		if (Q != (n - 1))
			printf("%d, ", a[Q]);
		else
			printf("%d", a[Q]);
	}
	printf("\n");
}
