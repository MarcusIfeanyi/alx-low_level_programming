#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Fxn prints String followed by new line
 * @s: The parameter / arguement
 * Return: void on success
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		_putchar('\n')
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s[i]);
}
