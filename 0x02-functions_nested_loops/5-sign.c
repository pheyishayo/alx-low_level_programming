#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @b: the int to check
 * Return: 1 and prints + if b is greater than zero
 * 0 and prints 0 if b is zero
 * -1 and prints - if b is less than zero
 */
int print_sign(int b)
{
if (b > 0)
{
_putchar('+');
return (1);
}
else if (b == 0)
{
_putchar(48);
return (0);
}
else if (b < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
