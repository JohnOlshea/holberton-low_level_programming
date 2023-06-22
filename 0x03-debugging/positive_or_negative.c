#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - checks if no is pos or neg
 *
 * @n: input parameter
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n ==  0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
