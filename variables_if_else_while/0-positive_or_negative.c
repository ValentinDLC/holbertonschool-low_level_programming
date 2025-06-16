#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
*
* Description: This program assigns a random number to the variable 'n',
* then prints whether the number is positive, zero, or negative.
*
* Return: Always 0 (Sucess)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
