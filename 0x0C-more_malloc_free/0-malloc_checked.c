#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of the momory
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
char *d;
d = malloc(b);
if (d == NULL)
exit(98);
else
return (d);
}
