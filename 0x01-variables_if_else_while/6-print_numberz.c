#include <stdio.h>

/**
 * main - Main
 * Description: that prints all single digit numbers of base 10
 * Return: Zero
 */

int main(void)
{
	int  n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}