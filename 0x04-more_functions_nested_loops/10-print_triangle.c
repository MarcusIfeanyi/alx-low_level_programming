#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - Print triangle sizeof the argument
 * @size : The height of the triangle to be printed
 * Return: Void.
 */
void print_triangle(int size)
{
	int f;
	int s;
	int spaces;
;
	for (f = 0; f < size; f++)
	{
		for (spaces = size - 1 - f; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (s = 0; s <= f; s++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
