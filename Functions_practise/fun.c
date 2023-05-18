#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * Return : 0
 */
int main(void)
{
	int result;
	int a;
	a = 40;
	int b;
       	b = 50;

	if (a > b)
	{
	
		result = a;
		printf("%d, a is greater\n", a);
	}
	else
	{
		result = b;
		 printf("%d, b is greater\n", b);
	}
	return (0);
}
