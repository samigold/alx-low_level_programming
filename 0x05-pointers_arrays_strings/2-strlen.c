#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: String to be checked
 * Return: 0 on success
 */

int _strlen(char *s)
{
int i;

while (i = 0 && s[i] != '\0')
{
	i++;
}
return (i);
}
