#include "main.h"
/**
 * swap_int - Entry point
 * @a: integer to swip
 * @b: second input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
