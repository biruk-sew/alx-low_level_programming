#include <stdio.h>
#include "main.h"
/**
 * _putchar - Entery point
 * @c: input
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
