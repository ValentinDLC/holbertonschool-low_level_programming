#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: Pointer to the string
 *
 * Description: If the length of the string is odd, prints the last
 * (length + 1) / 2 characters; if even, prints the last length / 2 characters.
 */
void puts_half(char *str)
{
	int length = 0;
	int start, i;

	while (str[length] != '\0')
		length++;

	start = (length + 1) / 2;

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

