#include "main.h"
/**
 * _print_rev_recursion - Entery point
 * @s: input
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recusioin(s + 1);
		_putchar(*s);
	}
}
