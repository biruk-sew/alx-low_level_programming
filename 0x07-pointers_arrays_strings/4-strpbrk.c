#include "main.h"
/**
 * *_strpbrk - Entery point
 * @s: first intpu
 * @accept: second input
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
