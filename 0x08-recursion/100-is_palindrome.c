#include "main.h"

/**
 * is_palindrome_recursive - Helper function to check if
 * a string is a palindrome recursively.
 * @s: The string to be checked
 * @a: Starting index of the string
 * @z: Ending index of the string
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome_recursive(char *s, int a, int z)
{
if (a >= z)
{
return (1);
}
if (s[a] != s[z])
{
return (0);
}
return (is_palindrome_recursive(s, a + 1, z - 1));
}

/**
 * is_palindrome - Function that returns 1 if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
int leng = 0;

while (s[leng] != '\0')
{
leng++;
}
return (is_palindrome_recursive(s, 0, leng - 1));
}
