#include "main.h"
#include <stdio.h>

/**
 * Print_number - Print an integer using _putchar
 * @n: The integer to print
 * Return: Empty
 */
void print_number(int n)
{
unsigned int x = n;

if (n < 0)
{
n *= -1;
x = n;
_putchar('-');
}
x /= 10;
if (x != 0)
print_number(x);
_putchar((unsigned int) n % 10 + '0');
}
