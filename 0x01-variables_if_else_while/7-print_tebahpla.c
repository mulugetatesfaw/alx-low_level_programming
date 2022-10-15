#include<stdio.h>
/**
 * main -prints the alphabets in reverse order
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'z'; la >= 'a'; la--)
		putchar(la);
	putchar('\n');
	return (0);
}
