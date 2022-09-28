#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Fxn prints String followed by new line
 * @s: The parameter / arguement
 * Return: void on success
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);

	_puts_recursion(s + 1);
}
