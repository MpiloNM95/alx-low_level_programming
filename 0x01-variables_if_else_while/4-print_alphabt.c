#include <stdio.h>

/**
 * main - entry point 
 * and prints the last digit of the number stored in variable n
 * Return: 0 Always (Success), non zero otherwise (Unsuccessful)
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	
	putchar("\n");
	
	return (0);
}
