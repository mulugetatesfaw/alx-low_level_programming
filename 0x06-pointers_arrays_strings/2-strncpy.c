#include "main.h"

/**
  * _strncpy - Copy a string
  * @dest: The destination value
  * @src: The source value
  * @n: The copy limit
  *
  * Return: char value
  */
char *_strncpy(char *dest, char *src, int n)
{
	int r = 0, m = 0;

	while (src[m])
	{
		b++;
	}

	while (r < n && src[r])
	{
		dest[r] = src[r];
		r++;
	}

	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}

	return (dest);
}

