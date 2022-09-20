#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, len, temp;

	len = strlen(s);

	if (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;

		print_rev(s);
	}
}
