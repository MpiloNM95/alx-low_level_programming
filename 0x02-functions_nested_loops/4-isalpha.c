#include "main.h"

/**
 * _isalpha - returns 1 if c is a letter, lowercase or uppercase
 * @c: integer to be tested
 * Return: 1 or 0
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
