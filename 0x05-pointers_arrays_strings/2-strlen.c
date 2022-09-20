#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: String to be checked
 * Return: 0 on success
 */

int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
	i++;
}
return (i);
}
