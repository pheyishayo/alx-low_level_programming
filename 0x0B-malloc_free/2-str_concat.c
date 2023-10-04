#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: first string to concatenates
 * @s2: second sting to concatenates
 * Return: pointer to newly allocated space
*/

char *str_concat(char *s1, char *s2)
{
int s1len = 0;
int s2len = 0;
int a = 0;
char *b;

if (s1 == NULL)
return ("");
if (s2 == NULL)
return ("");
for (a = 0; s1[a] != '\0'; a++)
s1len++;
for (a = 0; s2[a] != '\0'; a++)
s2len++;
b = malloc((sizeof(char) * s1len + s2len) +1);
if (b == NULL)
return (NULL);
for (a = 0; s1[a] != '\0'; a++)
b[a] = s1[a];
for (a = 0; s2[a] != '\0'; a++)
b[s1len + a] = s2[a];
return (b);
}

