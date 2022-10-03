#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array String name
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	int slight_change;

	slight_change = argc - 1;

	printf("%i\n", slight_change);
	return (0);
}

