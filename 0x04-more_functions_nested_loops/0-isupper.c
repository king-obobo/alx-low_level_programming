/**
 * _isupper - checks if c is upper
 * @c: input for alphabet
 * Return: 1 if it's uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
