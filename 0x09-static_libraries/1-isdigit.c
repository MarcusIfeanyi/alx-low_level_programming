#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Entry of the function
 *@c : parameter of the _isdigit and argument of the main script
 * Return: 0 The function returns 0 when it is successful
 * This  function checks if a number is a digit or not
 * Done by Marcus Ifeanyi
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
