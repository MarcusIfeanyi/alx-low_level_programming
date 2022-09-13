#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct) done by Marcus Ifeanyi
 */
int main(void)
{
	char createStringFromPutchar[] = ("_putchar");

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(createStringFromPutchar[c]);
	}

	_putchar('\n');

	return (0);
}
