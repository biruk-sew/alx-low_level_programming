#include "main.h"
/**
 * _islower - check if character is lowercase
 * @c: the character
 * Return: 1 if character is lowercase, 0 for if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
