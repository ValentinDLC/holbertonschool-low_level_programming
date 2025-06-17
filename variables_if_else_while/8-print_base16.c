#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}

	i = 0;
	while (i <= 5)
	{
		putchar(i + 'a');
		i++;
	}

	putchar('\n');
	return (0);
}

