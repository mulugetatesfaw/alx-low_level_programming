#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* betty style doc for function main goes there */
/**
 * main  -thows weather a given random number positive,negative or zero
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if	(n == 0)
	{
	printf("%d is	psitive\n", n);
	}
	else
	{
	printf("%d is	negative\n", n);
	}
	return (0);
}
