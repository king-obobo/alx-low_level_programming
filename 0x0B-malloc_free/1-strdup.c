#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/

char *_strdup(char *str)
{
	int index, len;
	char *cpy;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		cpy[index] = str[index];

	cpy[len] = '\0';

	return (cpy);
}



