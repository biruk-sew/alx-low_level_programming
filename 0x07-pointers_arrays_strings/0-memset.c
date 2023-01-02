#include "main.h"
/**
 * _memset - Entery point
 * @s: first input
 * @c: second input
 * @n: third input
 * Return: void
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
