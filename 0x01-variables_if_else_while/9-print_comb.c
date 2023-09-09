#include <stdio.h>
/**
 * main - Starting of a new project
 *
 * Return: Always 0
*/
int main(void)
{
	int k;
for (k = 0 ; k < 10 ; k++)
	{
putchar (k + '0');
if (k + '9')
putchar (',');
putchar (' ');
	}
return (0);
}
