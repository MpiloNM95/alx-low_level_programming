#include <stdio.h>

/**
 * main - entr point
 * and prints the last digit of the nymber stored in variable n
 * Return: 0 Always (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch = 'z'; ch++)
	{
	if (ch != 'q' && ch != 'e')
	{
	putchar(ch);
	}
	}
	putchar(10);
	return (0);
}	
