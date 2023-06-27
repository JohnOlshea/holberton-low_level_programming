#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string pointer
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0, j, ln;

	while (s[i] != '\0')
	{
		i++;
	}

	ln = i;

	for (j = ln - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
