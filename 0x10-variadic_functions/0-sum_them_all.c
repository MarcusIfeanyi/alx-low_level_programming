#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* sum_them_all - The fxn sums of all its parameters
* @n: n argument
* @...: Accepts a Variable No. of arguments
*	hence a variadic Function
* Return: sum or if n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list argument;

	if (n)
	{
		va_start(argument, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(argument, int);
		}
		va_end(argument);
	}
	return (sum);
}
