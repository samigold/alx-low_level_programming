#include "main.h"

/**
 * _isdigit - Checks for digit
 * @c: integer to be checked
 * Return: 1(success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

