#include "main.h"
void _putchar(char c)

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
int f;

for (f = 0; str[f] != '\0' ; f++)
{
if (f % 2 == 0)
_putchar(str[f]);
}
}
