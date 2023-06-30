#include "main.h"
/**
 * cap_string -  capitalizes all words of a string
 *
 * @s: string.
 *
 * Return: capitalized string.
 */
char *cap_string(char *s)
{
	int i = 0, j;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (*(s + 1) != '\0')
	{
		if (*(s + 1) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + i) = *(s + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i - 1))
					{
						*(s + 1) = *(s + i) - 32;
					}
				}
			}
		}
		i++;
	}
	return (s);
}
