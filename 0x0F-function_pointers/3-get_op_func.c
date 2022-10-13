#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Fxn to select and operation.
 *
 * @s: Parameter.
 *
 * Return: pointer.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
