#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array String name
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index <= argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
