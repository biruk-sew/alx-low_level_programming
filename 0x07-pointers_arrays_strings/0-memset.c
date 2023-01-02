#include "main.h"
/**
 * *_memse - Entery point
 * @s: first input
 * @b: second input
 * @n: third input
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
