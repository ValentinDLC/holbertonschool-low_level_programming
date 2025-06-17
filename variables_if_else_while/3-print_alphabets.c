#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase, then in uppercase,
* followed by a new line. Only putchar is allowed (used 3 times).
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}

