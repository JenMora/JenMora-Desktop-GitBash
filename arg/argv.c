#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	int j;
	printf("argc %d\n", argc);
	printf("I am going to affirm a new job and new energy\n");
	for (j = 0; j < argc; j++)
	{
		printf("argv[%d] = %s\n", j, argv[j]);
	}
	return (0);
}
