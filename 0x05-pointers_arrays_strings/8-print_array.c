#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description:  followed by a new line.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
