#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned int _strlen(char *s);

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *x;
unsigned int strlen1, i, d;

if (s1 == NULL)
s1 = ("");
if (s2 == NULL)
s2 = ("");

strlen1 = _strlen(s1);
x = malloc((strlen1 + n + 1) * sizeof(char));
if (x == NULL)
return (NULL);
for (i = 0, d = 0; i < (strlen1 + n); i++)
{
if (i < strlen1)
x[i] = s1[i];
else
x[i] = s2[d++];
}
x[i] = ('\0');

return (x);
}

/**
 * _strlen - find length of string
 * @s: string
 * Return: length of string
*/

unsigned int _strlen(char *s)
{
unsigned int p;

for (p = 0; s[p] != '\0'; p++)
;
return (p);
}
