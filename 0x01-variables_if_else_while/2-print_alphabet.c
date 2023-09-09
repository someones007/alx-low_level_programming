#include <stdio.h>

/**
 * main - Main
 * Description: prints lowercase alphabet with new line
 * Return: Zero
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}