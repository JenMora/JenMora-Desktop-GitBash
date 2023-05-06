#include "main.h"
#include <stdio.h>
/**
 *main - entry point
 *prime_factor-prints the largest prime factor of the number
 *
 *Return:0
 */
int main(void)
{
	int n;

	divisor;

	factors;
	
	divisor = 2;
	
	factors = [];

while (divisor <= n)

if (n % divisor == 0)
{
factors.append(divisor)
n /= divisor;
}
else
{
divisor += 1
}
return (factors);
}

