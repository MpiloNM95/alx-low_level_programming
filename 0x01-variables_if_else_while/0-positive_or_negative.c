#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point 
 * and print last digit of the number stored in variable n
 * Return: 0 Always (Success), non zero otherwise (Unsuccessful)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
