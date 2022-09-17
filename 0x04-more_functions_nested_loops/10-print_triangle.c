#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - Print triangle dependent on the parameter size.
 * @size : The height of the triangle
 * Return: Void.
 */
void print_triangle(int size)
{
	int f;
	int s;
	int spaces;

	for (f = 0; f < size; f++)
	{
		while (spaces < size - 1)
		{
			_putchar(' ');
			spaces++;
		}
		for (s = 0; s <= i; s++)
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
