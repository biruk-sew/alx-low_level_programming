#include "main.h"
#include <unistd.h>
/**
 * _putchar - Entery point
 * @c: input
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
