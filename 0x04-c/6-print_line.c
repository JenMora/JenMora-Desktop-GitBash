#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * Return: 0
 */

void print_line(int n)
{
	int c;

	c = 0;

	while (c < n && n > 0)
	{
		putchar('_');
		c++;
	}
	putchar('\n');
}
#include "main.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 */
int main(void)
{
print_line(0);
print_line(2);
print_line(10);
print_line(-4);
return (0);
}
