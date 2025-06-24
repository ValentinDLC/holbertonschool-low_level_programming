#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to encode.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char codes[]   = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = codes[j];
				break;
			}
		}
		i++;
	}

	return (str);
}

