/**
 * rev_string - reverses a string
 * @s: input string to reverse
 */
void rev_string(char *s)
{
	int i, j;
	char temp[1000];

	i = j = 0;
	while (s[i] != '\0')
	{
		temp[i] = s[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		s[i] = temp[j];
		i--;
		j++;
	}
	s[j++] = '\0';
}
