#include "main.h"

/**
 * print_rev - prints a string followed by a new line..
 *
 * @s: the string to print.
 * Return: void
 * done by Marcus Ifeanyi
 */

void print_rev(char *s)
{
	int number_of_string;

	number_of_string = 0;

	while (s[number_of_string])
	{
		number_of_string += 1;
	}
		int num;

	for (num = number_of_string - 1; num >= 0; num--)
	{
		_putchar(s[num]);
	}
	_putchar('\n');
}
