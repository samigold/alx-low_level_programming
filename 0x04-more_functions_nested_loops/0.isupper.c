#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: Character to be checked
 * Return: 1(success)
 */

int _isupper(int c)
{
	int c;

	if (c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
