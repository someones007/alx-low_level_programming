#include <stdio.h>

/**
 * main - Main
 * Description: prints all the numbers of base 16 in lowercase
 * Return: Zero
 */

int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}