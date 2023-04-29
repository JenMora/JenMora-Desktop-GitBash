#include "main.h"
#include <stdio.h>
/**
 *_mul.c - multiplies 2 integers
 *@a:one of the integers
 *@b: the other integer
 *Return:1 or 0 if otherwise
 */
int mul(int a, int b)
{
return (a * b);
}
/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 */
int main(void)
{
printf("%d\n", mul(98, 1024));
printf("%d\n", mul(-402, 4096));
return (0);
}
