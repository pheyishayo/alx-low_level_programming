#include "main.h"

/*
 * -isupper -checks for uppercase characters
 *  @c: character to be checked
 *  Return: 1 if c is uppercase 0 on failure
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
