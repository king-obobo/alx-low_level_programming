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
	printf("Size of a char: %s byte(s)\n", sizeof(char));
	printf("Size of an int: %s byte(s)\n", sizeof(int));
	printf("Size of an double: %s byte(s)\n", sizeof(double));
	printf("Size of a long int: %s byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %s byte(s)\n", sizeof(long long int));
	printf("Size of a float: %s byte(s)\n", sizeof(float));
	return (0);
}
