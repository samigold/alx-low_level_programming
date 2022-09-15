#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char lower_case = 'a';

	while(lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	putchar('\n');
	return (0);
}
