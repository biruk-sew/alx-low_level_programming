#include "main.h"
/**
 * _strlen_recursion - Entery point
 * @s: input
 * Return: inte
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
