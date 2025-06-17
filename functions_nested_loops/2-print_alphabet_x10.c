#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char line[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (line[j])
		{
			_putchar(line[j]);
			j++;
		}
		i++;
	}
}

