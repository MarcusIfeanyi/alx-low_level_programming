#include "main.h"
#include <stdio.h>

/**
 * print_square - Print square line with number equal to the argument
 * @n : The number of lines using '#' shows the wall of the square
 * Return: Void.
 */
void print_square(int n)
{
	int u;
	int v;

	for (u = 0; u < n; u++)
	{
		for (v = 0; v < n; v++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
