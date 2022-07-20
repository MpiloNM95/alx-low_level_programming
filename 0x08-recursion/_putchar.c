#include <unistd.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: The character to print
 *
 * Return: 1 (sucess)
 * -1 (unsuccessful/error), errno is set appropriately
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
