#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Main 
 * Description: positive or negativ random number
 * Return: Zero
 */

int main(void)
{
	int rn;

	srand(time(0));
	rn = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i positive\n", rn);
	else if (n < 0)
		printf("%i negative\n", rn);
	else
		printf("%i zero\n", rn);
	return (0);
}