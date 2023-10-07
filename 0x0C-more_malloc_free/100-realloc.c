#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previous memory block
 * @old_size: size in bytes of allocated space for `ptr`
 * @new_size: size in bytes for new allocated space
 * Return: Pointer to new memory block, or NULL if error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
char *source;
char *destination;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

if (new_size < old_size)
old_size = new_size;

source = ptr;
destination = new_ptr;


for ( i = 0; i < old_size; i++)
destination[i] = source[i];

free(ptr);
return (new_ptr);
}

