#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array String name
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count <= argc; count++)
	{

	printf("%s\n", argv[count]);
	}
	return (0);
}
