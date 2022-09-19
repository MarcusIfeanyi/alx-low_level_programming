#include "main.h"
#include <stdio.h>
/**
 * swap_int - Name of the function that will perform the swap
 * @a: The first variable to be swapped
 * @b: The second variable to be swapped
 * Return: void on success
 * done by Marcus Ifeanyi
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
