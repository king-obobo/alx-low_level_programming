/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: pointer to input string
 * @accept: pointer to string we searching for in @s
 *
 * Return: pointer to the bytes in @s or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
