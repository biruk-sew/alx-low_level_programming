#include "main.h"
/**
 * _strchr - Entery pont
 * @s: input
 * @c: input
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
