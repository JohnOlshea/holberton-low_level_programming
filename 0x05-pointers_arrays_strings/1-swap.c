#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer the first variable
 * @b: a pointer the seconde variable
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
