#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string pointer
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int ln = 0, i;

	while (str[ln] != '\0')
	{
		ln++;
	}

	for (i = 0; i < ln; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
