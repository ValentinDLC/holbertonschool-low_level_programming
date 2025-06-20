#include <stdio.h>
#include "main.h"

/**
 * print_long_number - prints an an unsigned long number using _putchar
 * @n: the number to print
 */
void print_long_number(unsigned long n)
{
	if (n / 10)
		print_long_number(n / 10);
	_putchar((n % 10) + '0');
}


/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next;
	int i;

	print_long_number(fib1);
	_putchar(44);
	_putchar(32);
	print_long_number(fib2);

	for (i = 3; i <= 50; i++)
	{
		next = fib1 + fib2;
		_putchar(44);
		_putchar(32);
		print_long_number(next);
		fib1 = fib2;
		fib2 = next;
	}
	_putchar(10);

	return (0);
}

