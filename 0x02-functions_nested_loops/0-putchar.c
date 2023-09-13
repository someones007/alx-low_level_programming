#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a new line.
 * Return: 0 (Success)
 */

int main(void)
{
    char varr[] = "_putchar";
    int i = 0;

    while (varr[i] != '\0')
    {
        _putchar(varr[i]);
        i++;
    }
    _putchar('\n');

    return (0);
}