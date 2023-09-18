#include "main.h"
int _putchar(char c)

/**
 * print_rev - fuction that prints a strings in reverse
 * @s: string to be printed in reverse
 * Return: void
*/

void print_rev(char *s)
{
int x;
int count = 0;
for (x = 0; s[x] != '\0'; x++)
count++;
for (x = count - 1; x >= 0; x--)
_putchar(s[x]);
_putchar('\n');
}
