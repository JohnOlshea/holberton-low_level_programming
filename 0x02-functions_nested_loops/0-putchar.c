#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int length = strlen(str);
	int ch;

	for (ch = 0; ch < length; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
