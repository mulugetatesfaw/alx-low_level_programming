#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @a: constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = a;
	return (s);
}
