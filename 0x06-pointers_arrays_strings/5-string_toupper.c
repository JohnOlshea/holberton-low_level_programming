#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + 1) != '\0')
	{
		if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
		{
			*(s + 1) = *(s + i) - 32;
		}
		i++;
	}

	return (s);
}
