#include "main.h"
/**
 * _puts_recursion - Prints string
 * @s: string to be printed
 * Return: 0 on exit
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);

		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n')
	}
}
