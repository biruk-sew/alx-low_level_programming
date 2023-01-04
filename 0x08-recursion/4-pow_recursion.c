#include "main.h"
/**
 * _pow_recursion - Entery point
 * @x: input one
 * @y: input two
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
