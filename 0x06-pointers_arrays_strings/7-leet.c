#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: String ponter
 *
 * Return: s
 */
char *leet(char *s)
{
	int sl = 0, lcount;
	char lL[] = "aAeEoOtTlL";
	char lN[] = "4433007711";

	while (s[sl] != '\0')
	{
		lcount = 0;
		while (lcount < 10)
		{
			if (lL[lcount] == s[sl])
			{
				s[sl] = lN[lcount];
			}
			lcount++;
		}
		sl++;
	}
	return (s);
}
