#include <stdio.h>
#include <stdlib.h>

/**
 * atoi - converts a string to an integer
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char* argv[])
{
	int num1, num2;

	if(argc > 3 || argc < 3){
		printf("Error\n");
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", (num1 *num2));

	return (0);
}
