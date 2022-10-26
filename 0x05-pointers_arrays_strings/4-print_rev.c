/**
 * rev_string - reverses a string
 * @s: string parameter input
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	char ch;
	int l, i;
	
	for (l = 0; s[l] != '\0'; ++l);

	for (i = 0; i < l / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - 1] = ch;
	}
}
