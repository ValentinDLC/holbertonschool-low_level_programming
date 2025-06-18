#include "main.h"
#include <stdio.h>

int main(void)
{
	char c1 = 'b';
	char c2 = 'Z';
	char c3 = '3';
	char c4 = '?';

	printf("%c is alphabetic? %d\n", c1, _isalpha(c1));
	printf("%c is alphabetic? %d\n", c2, _isalpha(c2));
	printf("%c is alphabetic? %d\n", c3, _isalpha(c3));
	printf("%c is alphabetic? %d\n", c4, _isalpha(c4));

	return (0);
}

