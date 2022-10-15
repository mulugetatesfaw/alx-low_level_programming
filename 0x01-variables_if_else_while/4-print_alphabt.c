#include<stdio.h>
/**
 * main -prints lower case leters
 * followed by new line except q and e
 * Return: always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
