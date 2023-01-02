#include "main.h"
/**
 * *_memse - Entery point
 * @s: first input
 * @b: second input
 * @n: third input
 * Return: char
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
