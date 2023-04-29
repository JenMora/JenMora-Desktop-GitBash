#include "main.h"
#include <stdio.h>
/**
 *_print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 *Return:0
 */
void print_numbers(void)
{
	int i;

	i = '0';

while (i <= '9')
{
putchar(i);
i++;
}
putchar('\n');
}
/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 */
int main(void)
{
print_numbers();
return (0);
}
