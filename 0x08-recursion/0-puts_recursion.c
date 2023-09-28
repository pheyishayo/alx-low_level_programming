#include "main.h"

/**
 * _puts_recursion - This prints a string @s followed by a new line.
 *
 * @s: string to be printed
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}

/**
 * main - Entry point of the program.
 * Return: Always 0.
*/
int main(void)

{
char str[] = "Puts with recursion";
_puts_recursion(str);
return (0);
}
