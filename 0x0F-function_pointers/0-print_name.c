#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - fxn that prints a name
 * @name: name of a person
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);

}
