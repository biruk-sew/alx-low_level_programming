#include "main.h"
/**
 * _strchr - Entery point
 * @s: first entery
 * @c: second entery
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
