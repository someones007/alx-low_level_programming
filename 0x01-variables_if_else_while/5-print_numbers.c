#include <stdio.h>

/**
 * main - main function
 * Description: prints all single digit numbers of base 10.
 * Return: zero
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}

	printf("\n");
	return (0);
}
