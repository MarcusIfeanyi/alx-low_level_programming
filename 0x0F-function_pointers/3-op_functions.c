#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - fxn performs the sum of two numbers.
 * @a: First number.
 * @b: Second number
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Fxn performs difference of two numbers.
 * @a: First number
 * @b: Second number
 *
 * Return: The int difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Fxn performs multiplication operation
 * @a: First number
 * @b: Second number
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Fxn performs division operation
 * @a: First number
 * @b: Second number
 *
 * Return: The quotient
 */
int op_div(int a, int b)
{
		if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - fxn module (%) division operaion.
 * @a: First number
 * @b: Second number
 *
 * Return: int as remainder
 */
int op_mod(int a, int b)
{
		if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
