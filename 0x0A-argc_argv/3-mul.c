#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry perform and action and return an int
 * @argc: Number of command line arguments
 * @argv: Array String name
 * Return: 0 on success and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc == 3)
	{
		num = (atoi(argv[1])) * (atoi(argv[2]));
		printf("%i\n", num);
		return(0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
