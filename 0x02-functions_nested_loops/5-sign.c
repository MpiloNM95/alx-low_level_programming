#include "main.h"

/**
 * print_sign - returns 1 if n is +, -1 if n is <0, 0 if n is 0
 * @n: integer to be tested
 * Return: 1, -1 0r 0
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
