#include "main.h"
#include <stdio.h>
/**
 * print_triangle -prints a triangle, followed by a new line.
 *@size:the size of the triangle
 * Return:0
 */
int print_triangle(int size)
{
	int a, b;

	a = 1;
	b = 0;

	while (a <= size && size > 0)
	{
		while (b < size - a)
		{
			putchar(' ');
			b++;
		}
		while (b < a)
		{
			putchar('#');
			b++;
		}
		putchar('\n');
		a++;
	}
	if (a == 1)
	{
		putchar('\n');
	}
		return (0);
}
#include "main.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 */
int main(void)
{
print_triangle(2);
print_triangle(10);
print_triangle(1);
print_triangle(0);
return (0);
}
