#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: the character to be checked
 * Retun: 1 or 0 if otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
putchar(c);
putchar('\n');
return (1);
}
else
return (0);
}
/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 */
int main(void)
{
char c;
c = '0';
printf("%c: %d\n", c, _isdigit(c));
c = 'a';
printf("%c: %d\n", c, _isdigit(c));
return (0);
}
