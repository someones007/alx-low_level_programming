#include <stdio.h>

/**
 *  main - Print sizes of bytes
 *  Return: Zero
 */

int main(void)
{
         printf("Size of a char: %d byte(s)\n"
         "Size of an int: %d byte(s)\n"
         "Size of a long int: %d byte(s)\n"
         "Size of a long long int: %d byte(s)\n"
         "Size of a float: %d byte(s)\n",
         sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float));
         return (0);
}
