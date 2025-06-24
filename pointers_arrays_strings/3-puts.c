#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: Pointer to the string to print
 *
 * Description: This function iterates through the string and prints
 * each character one by one using _putchar. It then prints a newline.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

