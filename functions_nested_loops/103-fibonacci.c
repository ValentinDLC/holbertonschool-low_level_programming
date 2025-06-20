#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an an unsigned long number using _putchar
 * @n: the number to print
 */
void print_long_number(unsigned long n)
{
	if (n / 10)
		print_long_number(n / 10);
	_putchar((n % 10) + 48);
}


/**
 *main - find and prints the sum of even-valued Fibonacci terms
 *		that do not exceed 4,000,000
 *
 *Return: Always 0 (sucess)
 */
int main(void)
{
	unsigned long fib1, fib2, next;
	unsigned long sum = 0;
	unsigned long limit = 4000000;
	
	if (fib2 % 2 == 0)
		sum += fib2;
	
	while (1)
	{
		next = fib1 + fib2;
		
		if (next > limit)
			break;
		if (next % 2 == 0)
			sum += next;
		
		fib1 = fib2;
		fib2 = next;
	}
	print_long_number(sum);
	_putchar(10);

	return (0);
}

