#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 1 to 100 with FizzBuzz rules
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			putchar(32);
		}
		else
		{
			putchar(10);
		}
	}

	return (0);
}

