#include <stdio.h>

/**
 * main - Main
 * Description: Alphabet in lowercase then in uppercase followed by a new line
 * Return: Zero
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}