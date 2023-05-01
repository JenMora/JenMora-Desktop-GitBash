#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the code
 * fizz_buzz - prints the numbers from 1 to 100, followed by a new line
 * Return: 0
 */
int main(void)
{
	int n;

	n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0)
		{
			printf("fuzz");
		}

			else if  (n % 5 == 0)
			{
				printf("Buzz");
			}

				else if (n % 15 == 0)
				{
					printf("FizzBuzz");
				}
				else
				{
					printf("%d", n);
				}
				n++;

	}
	if (n != 100)
	{
		putchar(' ');
	}
	printf("\n");
	return (0);
}

