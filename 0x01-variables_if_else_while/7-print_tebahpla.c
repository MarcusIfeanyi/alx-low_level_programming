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
	char lower_ASCII;

	for (lower_ASCII = 122; lower_ASCII >= 97; lower_ASCII--)
	{
		putchar(lower_ASCII);
	}
	putchar('\n');
	return (0);
}
