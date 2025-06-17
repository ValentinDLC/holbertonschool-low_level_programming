#include <stdio.h>

/**
 * main - Prints all single-digit numbers separated by comma and space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + 48);
		if (digit < 9)
		{
			putchar(44);
			putchar(32);
		}
		digit++;
	}

	putchar(10);
	return (0);
}

