#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entr point
 * and prints the last digit of the nymber stored in variable n
 * Return: 0 Always (success)
 */
int main(void)
{
char character;
for (character = 'a' ; character <= 'z' ; character++)
{
if (character != 'q' && character != 'e')
{
putchar(character);
}
}
putchar('\n');
return (0);
}
