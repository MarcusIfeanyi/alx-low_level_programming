#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct) done by Marcus Ifeanyi
 */
int main(void)
{
	int num1;

	int num2;

	for (num1 = 48; num1 < 57; num1++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
