#include <stdio.h>

/**
 * main - Main
 * Description: prints the lowercase alphabet in reverse
 * Return: Zero
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}