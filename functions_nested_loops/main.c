#include "main.h"
#include <stdio.h>

int main(void)
{
	char test1 = 'a';
	char test2 = 'Z';

	printf("%c is lowercase? %d\n", test1, _islower(test1));
	printf("%c is lowercase? %d\n", test2, _islower(test2));

	return (0);
}

