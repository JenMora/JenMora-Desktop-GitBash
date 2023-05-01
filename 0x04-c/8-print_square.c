#include "main.h"
#include <stdio.h>
/**
 *print_square - prints a square, followed by a new line.
 *@size: size of the square
 *Return: 0
 */
void print_square(int size)
{
	int i, j;

	i = 0;
	j = 0;

	while (i < size && size > 0)
	{

		while (j < size)
		{
			putchar('#');
			j++;
		}
		putchar('\n');
		i++;
	}
	if (i == 0)
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
print_square(2);
print_square(10);
print_square(0);
return (0);
}
