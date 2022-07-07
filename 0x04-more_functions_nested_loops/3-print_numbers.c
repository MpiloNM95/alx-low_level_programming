#include "main.h"

/**
 * print_numbers - Entry point to printing numbers 0 to 9.
 * Return: Being void function, we do not expect a return value.
 */
void print_numbers(void)
{
int x;

for (x = 0; x < 10; x++)
_putchar(x + '0');
_putchar('\n');
}
