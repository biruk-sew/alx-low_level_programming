#include "main.h"
/**
 * evaluate_num - Entery point
 * @num: input
 * @iterator: input
 * Return: 0 and 1
 */
int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)
		return (1);
	else if (num % iterator == 0)
		return (0);
	else if (num % iterator != 0)
		return (evaluate_num(num, iterator + 1));
	return (0);
}
/**
 * is_prime_number - Entery point
 * @n: input
 * Return: int
 */
int is_prime_number(int n)
{
	int iterator;

	iterator = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (evaluate_num(num, iterator));
}
