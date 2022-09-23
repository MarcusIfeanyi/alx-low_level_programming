#include "main.h"

/**
 * rot13 -  a   function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *s)
{
	int var1 = 0, var2;

	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
				'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
				'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd',
				'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
				'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
				'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
				'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F',
				'G', 'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o',
				'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
				'y', 'z'};
	while (s[var1]0)
	{
		for (var2 = 0; var2 < 52; var2++)
		{
			if (str[var1] == alphabet[var2])
			{
				s[var1] = rot13key[var2];
			}
		}
		var1++;
	}
	return (s);
}
