#include "main.h"

int _putchar(char c);

/**
* print_alphabet - Print the alphabet
 *
 * Return: 0
*/

void print_alphabet(void)
{
char x;

for (x = 'a' ; x <= 'z' ; x++)
_putchar(x);
_putchar('\n');
}
