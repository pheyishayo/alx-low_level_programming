#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - create an array of integers inclusive of min and max
 * @min: minimum value to include
 * @max: maximum value to include
 * Return: pointer to newly created array, or NULL on failure
*/
int *array_range(int min, int max)
{
int *resultArray, i, size;

if (min > max)
return (NULL);

size = max - min + 1;
resultArray = malloc(size *sizeof(int));
if (resultArray == NULL)
return (NULL);

for (i = 0; i < size; i++)
resultArray[i] = min + i;

return (resultArray);
}

