#include "main.h"
/**
 * _memcpy - Entery main
 * @dest: first input
 * @src: second input
 * @n: thired input
 * Return: char
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];
	return (dest);
}
