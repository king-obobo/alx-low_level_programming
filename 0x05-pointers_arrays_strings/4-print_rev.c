/**
 * rev_string - reverses a string
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	char temp;
	int i, len, len1;

	len = len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len1];
		s[len--] = temp;
	}
}
