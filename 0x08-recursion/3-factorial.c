#include "main.h"
/**
 * factorial - Entery point
 * @n: input
 * Return: int
 */
int factorial(int n)
{
	if (n ==0)
		return (1);
	else if (n < 0)
		return (-1);
	else 
		return (n * factorial(n - 1));
}
