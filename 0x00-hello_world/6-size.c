#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Uses sizeof to print the size of the various types
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of an double: %i byte(s)\n", sizeof(double));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
