#include <stdio.h>
/**
 * main - Starting of the project
 *
 * Return: Always 0
*/
int main(void)
{
	int a = 0;
	int b = 1;

for (a = 0; a <= 9; a++)
for (b = a + 1; b <= 9; b++)

putchar('0' + a);
putchar('0' + b);
if (a != 8 || b != 9)
{
putchar(',');
putchar(' ');
}
putchar ('\n');
return (0);
}
