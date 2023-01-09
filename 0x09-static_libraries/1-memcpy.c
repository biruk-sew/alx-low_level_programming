#include "main.h"
/**
 * _memcpy - Entery point
 * @dest: input
 * @src: input
 * @n: input
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;


	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
