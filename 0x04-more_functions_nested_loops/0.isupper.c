#include "main.h"

/**
 * _supper - Checks for uppercase character
 * @c: Character to be checked
 * Return: 1(success)
 * 0(otherwise)
 */

int _supper(int c)
{
	int c;

	if (c <= 'A' || c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
