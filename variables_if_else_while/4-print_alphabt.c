#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e
 * Return:  Always 0 (Success)
 */
int main(void)
{
char v = 'a';
	
while (v <= 'z')
{
if (v != 'e' && v != 'q')
putchar(v);
v++;
}

putchar('\n');
return (0);
}
