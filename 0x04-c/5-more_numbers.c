#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{


	char c, d;

	int i = 0;

	while (i < 10)

	{
		for (c = 0; c <= 14; c++)
		{
			d = c;
			if (d > 9)
			{
				putchar('1');
					d = c % 10;
			}
			putchar('0' + d);
		}
		putchar('\n');
		i++;
	}
}
#include "main.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 */
int main(void)
{
more_numbers();
return (0);
}
