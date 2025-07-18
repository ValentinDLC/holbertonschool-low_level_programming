#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *arg;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);
		if (arg != NULL)
		{
			printf("%s", arg);
		}
		else
		{
			printf("(nil)");
		}

		if (!(separator == NULL || i >= n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}


