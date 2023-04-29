#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks whether a char is in upper form
 * @c: the char
 * Return:1 or  0 if otherwise
 */
int _isupper(int c)
{

if ('c' >= 65 && c <= 90)
{
putchar(c);
putchar('\n');
return (1);
}
else
return (0);
}
