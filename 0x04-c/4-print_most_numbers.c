#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - prints the numbers, from 0 to 9
 *
 * Return: 0
 */
void print_most_numbers(void)
{
char c;

for (c = 48; c <= 57; c++)
{
if(!(c == 50 && c == 52))
putchar(c);
}
putchar('\n');
}
/**
  * main - check the code
  *  *
  *   * Return: Always 0.
  */
int main(void)
{
print_most_numbers();
return (0);
}
