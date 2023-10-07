#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of array
 * @size: size of array
 * Return: Null if error, else pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *x;
if (nmemb == 0 || size == 0)
return (NULL);

x = calloc(nmemb, size);
if (x == NULL)
return (NULL);
else
return (x);
}
