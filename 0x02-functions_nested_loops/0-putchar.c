#include <stdio.h>
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
		putchar(createStringFromPutchar[c]);
	}

	putchar('\n');

	return (0);
}
