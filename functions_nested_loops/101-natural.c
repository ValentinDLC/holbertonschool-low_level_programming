#include <stdio.h>
#include "main.h"

/**
 * sum_multiples_3_or_5 - Computes the sum of multiples of 3 or 5 below limit
 * @limit: Upper bound (excluded)
 *
 * Return: The sum
 */
int sum_multiples_3_or_5(int limit)
{
	int i, sum = 0;

	for (i = 0; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return (sum);
}

/**
 * main - Entry point for 101-natural
 *
 * Return: Always 0
 */
int main(void)
{
	int result;

	result = sum_multiples_3_or_5(1024);
	printf("%d\n", result);

	return (0);
}

