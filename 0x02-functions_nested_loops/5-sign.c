#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number to checked
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	if(n > 0)
	{
		printf("+");
		return (1);
	} elseif(n == 0)
	{
		printf("0")l;
		return (0);
	} else 
	{
		printf("-");
		return (-1);
	}
}
