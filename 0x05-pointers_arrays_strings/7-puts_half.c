#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: string pointer to be printed
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int ln = 0, n, i;

	while (str[ln] != '\0')
	{
		ln++;
	}

	if (ln % 2 == 0)
	{
		for (i = ln / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (ln % 2)
	{
		for (n = (ln - 1) / 2; n < ln - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
