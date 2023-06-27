#include "main.h"

/**
 * rev_string - Reverse string
 * @s: string pointer to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char temp;
	int i, ln = 0, ln2 = 0;

	while (s[ln] != '\0')
	{
		ln++;
	}

	ln2 = ln - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[ln2];
		s[ln2--] = tmp;
	}
}
