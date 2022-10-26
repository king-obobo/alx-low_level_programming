#include"main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int l, n, i;

	l = strlen(str);
	if (l % 2 == 0)
		y = l / 2;
	else
		y = l / 2 + 1;

	for (i = y; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
}

