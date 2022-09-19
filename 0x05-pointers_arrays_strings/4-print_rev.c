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
	int num = 0;

	while (s[num])
	{
		num++;
	}
	while (num--)
	{
		_putchar(s[num]);
	}
	_putchar('\n');

}
