/**
 * _strcat - function that concatenates
 *          two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c0, c1;

	c0 = 0;

	while (dest[c0])
		c0++;

	for (c1 = 0; src[c1]; c1++)
		dest[c0++] = src[c1];

	return (dest);
}
