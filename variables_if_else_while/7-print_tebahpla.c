#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char v = 'z';

	while (v >= 'a')
	{
		putchar(v);
		v--;
	}

	putchar('\n');
	return (0);
}

