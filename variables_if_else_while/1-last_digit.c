#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Description: This program assigns a random number to the variable 'n',
* then prints the last digit of 'n' and a message depending on its value.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;

if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else if (last_digit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
return (0);
}
