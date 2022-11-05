#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two arguments passed into it
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int firstNum, secondNum;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	firstNum = atoi(argv[1]);
	secondNum = atoi(argv[2]);

	printf("%d\n", firstNum * secondNum);
	return (0);
}
