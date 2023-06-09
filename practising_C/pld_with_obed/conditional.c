#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * main - entry to the program
 * Return : 0
 */

int main (void)
{
	int grade;
	int score;

	printf("what is your score?\n");
	scanf("%d\n", &score);

	if (score >= 80 && score <= 100)
		printf("A\n");
	else if
		(score >= 70 && score <= 79)
			printf("B\n");
	else if 
		(score >= 60 && score <= 69)
			printf("C\n");
	else
		printf("not yet");
	return (0);
}
