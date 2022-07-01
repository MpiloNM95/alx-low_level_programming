#include <stdio.h>

/**
 * main - entry point
 * and prints the last digit of the number stored in variable n
 * Return: 0 Always (Success), non zero otherwise (Unsuccesful)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
