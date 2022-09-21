#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (n = (len - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
