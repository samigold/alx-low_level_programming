#include "main.h"
/**
 * _isalpha - checks for alphabets
 * int c: the characters to be checked
 * Return: 1 (success), 0 (failure)
 */
int _isalpha(int c)
{
	if((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'))
	{
	       	return (1);
	} else 
	{
		return (0);
	}
}
