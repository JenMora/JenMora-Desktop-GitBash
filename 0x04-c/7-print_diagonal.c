#include "main.h"
#include <stdio.h>

/**
 * print_diagonal -draws a diagonal line on the terminal
 *
 * Return:0
 *
 */
void print_diagonal(int n)
{
	int i;

	i = 0;

	while (i < n && n > 0)
	{
		putchar(' ');
		putchar('\\');
		i++;
	}
	if (i < n && n < 0)
	{
		putchar('\n');
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
print_diagonal(0);
print_diagonal(2);
print_diagonal(10);
print_diagonal(-4);
return (0);
}
