#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string to reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	for (*(s + i) != '\0')
	{
		i++;
		i -=1;
		
		while (i < j)
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;

			j++;
		}
		i--;
	}
}
