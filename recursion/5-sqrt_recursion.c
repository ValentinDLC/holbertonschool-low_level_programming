#include "main.h"

/**
 * find_sqrt - helper function to find the square root recursively
 * @n: number to find the square root of
 * @guess: current guess
 *
 * Return: square root of n, or -1 if it doesn't have a natural square root
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess > n)
		return (-1);

	if (guess * guess == n)
		return (guess);

	return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}

