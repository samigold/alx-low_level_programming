#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number to checked
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	int ret;
	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	} else if (n == 0)
	{
		_putchar('0');
		ret = 0;
	} else
	{
		_putchar('-');
		ret = -1;
	}
	return (ret);
}
