#include <unistd.h>
/**
 * _putchar - Entery point
 * @c: input
 * Return: int
 */
int _oytchar(char c)
{
	return (write(1, &c, 1));
}
