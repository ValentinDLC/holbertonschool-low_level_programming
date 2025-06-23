#include "main.h"

/**
 * print_square - Draws a square on the terminal.
 * @size: Number of times the character '#' should be printed.
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(35);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}

