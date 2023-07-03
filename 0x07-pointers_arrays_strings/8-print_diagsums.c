#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: matrix entries
 * @size: matrix size
 *
 * Return: diagonals sum
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0, s2 = 0, x;

	for (x = 0; x < size; x++)
		s1 = s1 + a[x * size + x];

	for (x = size - 1; x >= 0; x--)
		s2 += a[x * size + (size - x - 1)];

	printf("%d, %d\n", s1, s2);
}
